#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include<fstream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
//struct for Extended Euclidian Algorithm parameters
struct egcd {
	long long g;
	long long d;
	long long m;
};
//struct to hold keys
struct keys {
	long long p_key;
	long long q_key;
	long long k_key;
	long long n_key;
	long long e_key;
	long long d_key;
};
keys main_key;
long long getprime(long long rand_no);
long long coprime(long long x, long long coprime);
//extendend euclidian algorithm
egcd EEA (long long e, long long k);
//multiplicative exponential function
long long ME (long long x,long long z,long long n);
void generate_keys();
void encrypt(string file_name);
void decrypt(string file_name);

int main()
{
    //Welcome message
        cout<<"\n\t\t\t\t\t   ENCRYPTION & DECRYPTION PROGRAM \n"
            <<"\t\t\t\t\t made by MOHAMED FARIS & OMAR MONZER \n"
            <<"\t\t\t\t\t ZEWAIL CITY OF SCIENCE & TECHNOLOGY \n"
            <<"\t\t\t\t\t           MATH 203 PROJECT \n"
            <<"\t\t\t\t\t************************************* \n";
    // Generating keys to be used in the RSA
    generate_keys();
    //main loop
	while (true) {
	    char command;
	    string file_name;
	    cout<<"\n*************************************************************************************";
	    cout<<"\nChoose a command:\n  (a) Encrypt a file\n  (b) Decrypt a file\n  (c) Generate another key\n  (d) Show key\n";
	    cin>>command;
	    switch (command) {
	        case 'a':
	            cout<<"\nEnter the name of the file (example.txt): ";
			    cin>>file_name;
			    encrypt(file_name);
			    break;
	        case 'b':
	            cout<<"\nEnter the name of the file (example.txt): ";
	            cin>>file_name;
			    decrypt(file_name);
			    break;
	        case 'c':
	        	generate_keys();
	            break;
	        case 'd':
	            cout<<"\n p = "<<main_key.p_key;
	            cout<<"\n q = "<<main_key.q_key;
	            cout<<"\n n = "<<main_key.n_key;
	            cout<<"\n k = "<<main_key.k_key;
	            cout<<"\n e = "<<main_key.e_key;
	            cout<<"\n d = "<<main_key.d_key<<endl;
	            break;
	        default:
	        	cout<<"\nWrong Input\n";
	        	break;
	    }
	}
}
long long getprime(long long rand_no){
    bool isprime = false;
    long long prime;
    // even make it odd
    if(rand_no%2 == 0){
        rand_no++;
    }
    // main prime number finder loop
    while (isprime == false){
        // Prime number test
        long long x = sqrt(rand_no);
        for(int k = 3 ; k<= x ; k = k+2 ){
            if(rand_no%k == 0){
                isprime = false;
                break;
            }
            else {isprime = true;}
        }
        //breaking condition - found a prime-
        if(isprime == true){
            prime = rand_no;
        }
        //did not find a prime, so proceed to the next number
        else {rand_no = rand_no+2;}
    }
    return prime;
}

long long coprime(long long x, long long coprime){
    long long b;
    long long e = coprime;
    bool iscoprime = false;
    long long k = x;
    while(iscoprime == false){
        e = coprime;
        k = x;
        b = 1;
        while(b!=0){ //ecludian algorithm
            b = k%e;
            k = e;
            e = b;
        }
        if(k == 1){
            iscoprime = true;
            return coprime;
        }
        else{
            coprime++;
        }
    }
}
egcd EEA (long long e, long long k) {
	egcd result;
	if(k==0) {
		return {e,1,0};
	}
	else {
		result =EEA (k,e%k);
		return {result.g,result.m,(result.d-(e/k)*result.m)};
	}
}
long long ME (long long x,long long z,long long n) {
	long long y=1;
	long long u=x%n;
	while (z>0){
		if ((z%2)==1){
			y=(y*u)%n;
		}
        z=floor(z/2);
		u=(u*u)%n;
	}
	return y;
}
void generate_keys(){
    // Getting the value of the current time as an initial value for generating random numbers.
	long long rand_no = time(NULL);
	int minimum;
    // minimum should not be more than 1000 due to variable type int makes will overflow
    minimum = 1000;
    // generating a random number larger than minimum number & less than max number
    main_key.p_key = (((rand_no*5+minimum)%(minimum*8/9))+3*minimum) ;
    main_key.p_key = getprime(main_key.p_key);

    main_key.q_key = (((rand_no*11+minimum)%(minimum*3/9))+8*minimum) ;
    main_key.q_key = getprime(main_key.q_key);

    main_key.n_key = main_key.p_key*main_key.q_key;
    main_key.k_key = (main_key.p_key-1)*(main_key.q_key-1);

    // Finding a co=prime number to k
    main_key.e_key = (((rand_no*3+minimum)%(minimum*1/9))+2*minimum/10) ;
    main_key.e_key = coprime(main_key.k_key,main_key.e_key);

	//Finding d
	egcd result=EEA(main_key.e_key,main_key.k_key);
	main_key.d_key=result.d;
	while(main_key.d_key<0) {
		main_key.d_key+=main_key.k_key;
	}
	cout<<"\nKey Genereted\n";
}
void encrypt(string file_name){
	string letters=" abcdefghijklmnopqrstuvwxyzABCDEFGHIGKLMNOPQRSTUVWXYZ0123456789?";
	int letter_index;
	char letter;
	ifstream myfile;
	myfile.open(file_name);
	if (myfile.is_open()) {
		//Naming output file
	    file_name.erase(file_name.end()-4,file_name.end());
	    file_name.append("_encrypted.txt");
	    ofstream efile (file_name);
		while (!myfile.eof()/*end of file*/) {
			myfile.get(letter);
			if (myfile.eof()) {
				break;
			}
			if (letter == '\n'/*new line*/) {
				efile<<"\n";
			}
			else{
				//find index of letter
			    letter_index= letters.find_first_of(letter);
			    if (letter_index==string::npos) {
			    	letter_index=63;
				}
				//encrypting letter
		        long long c=ME(letter_index,main_key.e_key,main_key.n_key);
		        efile<<c<<" ";
			}
		}
		cout<<"\nFile encrypted\n";
		myfile.close();
		efile.close();
	}
	else {
		cout<<"\nWrong Input\n";
	}
}
void decrypt(string file_name){
	string letters=" abcdefghijklmnopqrstuvwxyzABCDEFGHIGKLMNOPQRSTUVWXYZ0123456789?";
	long long e_no,d_no;
	string line;
	ifstream myfile;
	myfile.open(file_name);
	if (myfile.is_open()) {
		//naming output file
	    file_name.erase(file_name.end()-4,file_name.end());
	    file_name.append("_decrypted.txt");
		ofstream dfile (file_name);
		while (!myfile.eof()) {
			//get next line from encrypted file
			getline(myfile,line);
			//stringstream of the line
			stringstream linestream(line);
		    while (linestream >> e_no/*there is still input in the line*/) {
		    	//decrypting the number
		        d_no=ME(e_no,main_key.d_key,main_key.n_key);
		        dfile<<letters[d_no];
		    }
		dfile<<"\n";
	    }
		cout<<"\nFile decrypted\n";
		myfile.close();
		dfile.close();
	}
	else {
		cout<<"\nWrong Input\n";
	}
}
