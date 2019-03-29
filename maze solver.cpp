#include<iostream>
using namespace std;
int main() {
	//drawing a given maze
	int size=29;
	char maze [size][size];
	for (int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++){
			maze[i][j]=219;
		}
	}
	maze[1][1]=32,maze[1][2]=32,maze[1][3]=32,maze[1][4]=32,maze[1][5]=32,maze[1][7]=32,maze[1][8]=32,maze[1][9]=32,maze[1][10]=32,maze[1][11]=32,maze[1][12]=32,maze[1][13]=32,maze[1][14]=32,maze[1][15]=32,maze[1][17]=32,maze[1][18]=32,maze[1][19]=32,maze[1][20]=32,maze[1][21]=32,maze[1][22]=32,maze[1][23]=32,maze[1][25]=32,maze[1][26]=32,maze[1][27]=32;
	maze[2][1]=32,maze[2][5]=32,maze[2][7]=32,maze[2][15]=32,maze[2][17]=32,maze[2][23]=32,maze[2][25]=32,maze[2][27]=32;
	maze[3][1]=32,maze[3][2]=32,maze[3][3]=32,maze[3][5]=32,maze[3][7]=32,maze[3][8]=32,maze[3][9]=32,maze[3][11]=32,maze[3][12]=32,maze[3][13]=32,maze[3][15]=32,maze[3][17]=32,maze[3][19]=32,maze[3][20]=32,maze[3][21]=32,maze[3][23]=32,maze[3][25]=32,maze[3][27]=32;
	maze[4][5]=32,maze[4][11]=32,maze[4][13]=32,maze[4][15]=32,maze[4][17]=32,maze[4][21]=32,maze[4][23]=32,maze[4][27]=32;
	maze[5][0]='S',maze[5][1]=32,maze[5][2]=32,maze[5][3]=32,maze[5][4]=32,maze[5][5]=32,maze[5][7]=32,maze[5][8]=32,maze[5][9]=32,maze[5][11]=32,maze[5][13]=32,maze[5][15]=32,maze[5][17]=32,maze[5][18]=32,maze[5][19]=32,maze[5][20]=32,maze[5][21]=32,maze[5][23]=32,maze[5][25]=32,maze[5][26]=32,maze[5][27]=32;
	maze[6][5]=32,maze[6][7]=32,maze[6][9]=32,maze[6][13]=32,maze[6][15]=32,maze[6][23]=32,maze[6][25]=32,maze[6][27]=32;
	maze[7][1]=32,maze[7][2]=32,maze[7][3]=32,maze[7][4]=32,maze[7][5]=32,maze[7][7]=32,maze[7][9]=32,maze[7][10]=32,maze[7][11]=32,maze[7][12]=32,maze[7][13]=32,maze[7][14]=32,maze[7][15]=32,maze[7][17]=32,maze[7][18]=32,maze[7][19]=32,maze[7][20]=32,maze[7][21]=32,maze[7][22]=32,maze[7][23]=32,maze[7][24]=32,maze[7][25]=32,maze[7][27]=32;
	maze[8][1]=32,maze[8][5]=32,maze[8][9]=32,maze[8][15]=32,maze[8][17]=32,maze[8][21]=32,maze[8][27]=32;
	maze[9][1]=32,maze[9][3]=32,maze[9][5]=32,maze[9][6]=32,maze[9][7]=32,maze[9][8]=32,maze[9][9]=32,maze[9][11]=32,maze[9][12]=32,maze[9][13]=32,maze[9][15]=32,maze[9][17]=32,maze[9][19]=32,maze[9][21]=32,maze[9][23]=32,maze[9][24]=32,maze[9][25]=32,maze[9][27]=32;
	maze[10][1]=32,maze[10][3]=32,maze[10][11]=32,maze[10][15]=32,maze[10][17]=32,maze[10][19]=32,maze[10][21]=32,maze[10][23]=32;
	maze[11][1]=32,maze[11][3]=32,maze[11][5]=32,maze[11][6]=32,maze[11][7]=32,maze[11][8]=32,maze[11][9]=32,maze[11][11]=32,maze[11][12]=32,maze[11][13]=32,maze[11][14]=32,maze[11][15]=32,maze[11][17]=32,maze[11][18]=32,maze[11][19]=32,maze[11][21]=32,maze[11][22]=32,maze[11][23]=32,maze[11][25]=32,maze[11][26]=32,maze[11][27]=32;
	maze[12][1]=32,maze[12][3]=32,maze[12][5]=32,maze[12][7]=32,maze[12][11]=32,maze[12][17]=32,maze[12][19]=32,maze[12][21]=32,maze[12][23]=32,maze[12][25]=32;
	maze[13][1]=32,maze[13][3]=32,maze[13][5]=32,maze[13][7]=32,maze[13][8]=32,maze[13][9]=32,maze[13][11]=32,maze[13][13]=32,maze[13][14]=32,maze[13][15]=32,maze[13][16]=32,maze[13][17]=32,maze[13][19]=32,maze[13][21]=32,maze[13][23]=32,maze[13][24]=32,maze[13][25]=32,maze[13][26]=32,maze[13][27]=32;
	maze[14][1]=32,maze[14][3]=32,maze[14][5]=32,maze[14][9]=32,maze[14][11]=32,maze[14][21]=32;
	maze[15][1]=32,maze[15][3]=32,maze[15][5]=32,maze[15][7]=32,maze[15][9]=32,maze[15][11]=32,maze[15][12]=32,maze[15][13]=32,maze[15][14]=32,maze[15][15]=32,maze[15][16]=32,maze[15][17]=32,maze[15][18]=32,maze[15][19]=32,maze[15][21]=32,maze[15][22]=32,maze[15][23]=32,maze[15][24]=32,maze[15][25]=32,maze[15][27]=32;
	maze[16][1]=32,maze[16][3]=32,maze[16][5]=32,maze[16][7]=32,maze[16][9]=32,maze[16][10]=32,maze[16][11]=32,maze[16][19]=32,maze[16][25]=32,maze[16][27]=32;
	maze[17][1]=32,maze[17][3]=32,maze[17][7]=32,maze[17][13]=32,maze[17][14]=32,maze[17][15]=32,maze[17][16]=32,maze[17][17]=32,maze[17][19]=32,maze[17][21]=32,maze[17][22]=32,maze[17][23]=32,maze[17][25]=32,maze[17][26]=32,maze[17][27]=32;
	maze[18][1]=32,maze[18][3]=32,maze[18][4]=32,maze[18][5]=32,maze[18][6]=32,maze[18][7]=32,maze[18][8]=32,maze[18][9]=32,maze[18][10]=32,maze[18][11]=32,maze[18][13]=32,maze[18][17]=32,maze[18][19]=32,maze[18][23]=32,maze[18][27]=32;
	maze[19][1]=32,maze[19][5]=32,maze[19][7]=32,maze[19][9]=32,maze[19][11]=32,maze[19][13]=32,maze[19][14]=32,maze[19][15]=32,maze[19][17]=32,maze[19][19]=32,maze[19][20]=32,maze[19][21]=32,maze[19][22]=32,maze[19][23]=32,maze[19][24]=32,maze[19][25]=32,maze[19][27]=32;
	maze[20][1]=32,maze[20][3]=32,maze[20][4]=32,maze[20][5]=32,maze[20][7]=32,maze[20][17]=32,maze[20][19]=32,maze[20][25]=32,maze[20][27]=32;
	maze[21][1]=32,maze[21][3]=32,maze[21][7]=32,maze[21][7]=32,maze[21][8]=32,maze[21][9]=32,maze[21][10]=32,maze[21][11]=32,maze[21][13]=32,maze[21][14]=32,maze[21][15]=32,maze[21][17]=32,maze[21][19]=32,maze[21][21]=32,maze[21][22]=32,maze[21][23]=32,maze[21][25]=32,maze[21][27]=32;
	maze[22][1]=32,maze[22][3]=32,maze[22][5]=32,maze[22][11]=32,maze[22][13]=32,maze[22][15]=32,maze[22][17]=32,maze[22][18]=32,maze[22][19]=32,maze[22][21]=32,maze[22][25]=32;
	maze[23][1]=32,maze[23][2]=32,maze[23][3]=32,maze[23][5]=32,maze[23][7]=32,maze[23][8]=32,maze[23][9]=32,maze[23][11]=32,maze[23][13]=32,maze[23][15]=32,maze[23][17]=32,maze[23][19]=32,maze[23][21]=32,maze[23][22]=32,maze[23][23]=32,maze[23][24]=32,maze[23][25]=32,maze[23][26]=32,maze[23][27]=32;
	maze[24][5]=32,maze[24][5]=32,maze[24][7]=32,maze[24][9]=32,maze[24][11]=32,maze[24][13]=32,maze[24][15]=32,maze[24][17]=32,maze[24][19]=32;
	maze[25][1]=32,maze[25][2]=32,maze[25][3]=32,maze[25][4]=32,maze[25][5]=32,maze[25][6]=32,maze[25][7]=32,maze[25][9]=32,maze[25][11]=32,maze[25][13]=32,maze[25][15]=32,maze[25][16]=32,maze[25][17]=32,maze[25][19]=32,maze[25][20]=32,maze[25][21]=32,maze[25][22]=32,maze[25][23]=32,maze[25][24]=32,maze[25][25]=32,maze[25][26]=32,maze[25][27]=32;
	maze[26][1]=32,maze[26][9]=32,maze[26][13]=32,maze[26][16]=32,maze[26][21]=32,maze[26][26]=32;
	maze[27][1]=32,maze[27][2]=32,maze[27][3]=32,maze[27][4]=32,maze[27][5]=32,maze[27][6]=32,maze[27][7]=32,maze[27][9]=32,maze[27][10]=32,maze[27][11]=32,maze[27][12]=32,maze[27][13]=32,maze[27][15]=32,maze[27][16]=32,maze[27][17]=32,maze[27][19]=32,maze[27][20]=32,maze[27][21]=32,maze[27][22]=32,maze[27][23]=32,maze[27][25]=32,maze[27][26]=32,maze[27][27]=32;
	maze[28][7]='G';
	cout<<"\tThe Maze"<<endl;
	for (int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++){
			cout << maze[i][j];
		}
		cout << endl;
	}

    /*************************************************************************************************************************/
	//finding all possible ways
	for (int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++){
			if (maze[i][j]==32) {
				maze[i][j]='.';
			}
		}
	}
	cout<<"\tAll Possible Ways\n";
	for (int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++){
			cout << maze[i][j];
		}
		cout << endl;
	}
	for (int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++){
			if (maze[i][j]=='.') {
				maze[i][j]=32;
			}
		}
	}
	///FINDING THE MAZE SOLUTION
	//searching for the start
	int s1,s2;
	for (int x=0;x<size;x=x+size-1) {
		for (int y=0;y<size;y++) {
			if (maze[x][y]=='S') {
				s1=x;
				s2=y;
			}
			else if (maze[y][x]=='S') {
				s1=y;
				s2=x;
			}
		}
	}
	//moving the first step
	int f1,f2;
	if (s1==0) {
	f1=s1+1;
	f2=s2;
	}
	else if (s2==0) {
	f1=s1;
	f2=s2+1;
	}
	else if (s1==size-1) {
	f1=s1-1;
	f2=s2;
	}
	else if (s2==size-1) {
	f1=s1;
	f2=s2-1;
	}
	maze[f1][f2]='.';
	//going through spaces
	for (;true;) {
		//int num_spaces=0;
		if (maze[f1+1][f2]=='G' || maze[f1-1][f2]=='G' || maze[f1][f2+1]=='G' || maze[f1][f2-1]=='G') {
			break;
		}
		if (maze[f1+1][f2]==32) {
			f1++;
			maze[f1][f2]='.';
		}
		else if (maze[f1-1][f2]==32) {
			f1--;
			maze[f1][f2]='.';
		}
		else if (maze[f1][f2+1]==32) {
			f2++;
			maze[f1][f2]='.';
		}
		else if (maze[f1][f2-1]==32) {
			f2--;
			maze[f1][f2]='.';
		}
		else {
			maze[f1][f2]='*';
			if (maze[f1+1][f2]=='.') {
				f1++;
			}
			else if (maze[f1-1][f2]=='.') {
				f1--;
			}
			else if (maze[f1][f2+1]=='.') {
				f2++;
			}
			else if (maze[f1][f2-1]=='.') {
				f2--;
			}
		}
	}
	//removing wrong spaces
	for (int x=1;x<(size-1);x++) {
		for (int y=1;y<(size-1);y++) {
			if (maze[x][y]=='*') {
				maze[x][y]=32;
			}
		}
	}
	//show maze array
	cout<<"\tThe Correct Way\n";
	for (int x=0;x<size;x++) {
		for (int y=0;y<size;y++) {
		cout<<maze[x][y];
		}
		cout<<endl;
	}
	return 0;
}
