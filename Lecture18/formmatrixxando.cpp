#include<iostream>
using namespace std;
// // square matrix
void formmatrixxando(char arr[100][100],int tcols,int trows){
	int sr=0,sc=0,ec=tcols-1,er=trows-1;
	char ch='X';
	while(sr<=er and sc<=ec){
		// ist row ko print karne k lye 
	for(int i=sc;i<=ec;i++){
		arr[sr][i]=ch;
	}
	sr++;

	// last col

	for(int j=sr;j<=er;j++){
		arr[j][ec]=ch;

	}
	ec--;


	// last row
	for(int l=ec;l>=sc;l--){
		arr[er][l]=ch;
	}
	er--;
	

	// ist col

	for(int k=er;k>=sr;k--){
		arr[k][sc]=ch;
	}
	sc++;
	if(ch=='X'){
		ch='O';
	}
	else{
		ch='X';
	}
	

	}
	


	
}


int main(){
	
	int cols;
	int rows;
	cin>>cols>>rows;
	char arr[100][100];
	// 	int cols=5;
	// int rows=3;
	formmatrixxando(arr,cols,rows);

	for (int i = 0; i <rows; ++i)
	{
		for(int j=0;j<cols;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}




	return 0;
}