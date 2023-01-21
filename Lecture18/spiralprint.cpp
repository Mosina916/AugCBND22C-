#include<iostream>
using namespace std;
// // square matrix
// void spiralprint(int arr[3][5],int tcols,int trows){
// 	int sr=0,sc=0,ec=tcols-1,er=trows-1;

// 	while(sr<=er and sc<=ec){
// 		// ist row ko print karne k lye 
// 	for(int i=sc;i<=ec;i++){
// 		cout<<arr[sr][i]<<" ";
// 	}
// 	sr++;

// 	// last col

// 	for(int j=sr;j<=er;j++){
// 		cout<<arr[j][ec]<<" ";

// 	}
// 	ec--;


// 	// last row
// 	for(int l=ec;l>=sc;l--){
// 		cout<<arr[er][l]<<" ";
// 	}
// 	er--;
	

// 	// ist col

// 	for(int k=er;k>=sr;k--){
// 		cout<<arr[k][sc]<<" ";
// 	}
// 	sc++;

// 	}
	


	
// }

// square matrix
void spiralprint(int arr[3][5],int tcols,int trows){
	int sr=0,sc=0,ec=tcols-1,er=trows-1;

	while(sr<=er and sc<=ec){
		// ist row ko print karne k lye 
	for(int i=sc;i<=ec;i++){
		cout<<arr[sr][i]<<" ";
	}
	sr++;

	// last col

	for(int j=sr;j<=er;j++){
		cout<<arr[j][ec]<<" ";

	}
	ec--;

	if(sr<er){
		// last row
	for(int l=ec;l>=sc;l--){
		cout<<arr[er][l]<<" ";
	}
	er--;

	}
	
	

	// ist col
	if(sc<ec){
		for(int k=er;k>=sr;k--){
		cout<<arr[k][sc]<<" ";
	}
	sc++;

	}

	}
	
}
int main(){
	
	int arr[5][5]={
		{3,4,6,5,22},
		{1,9,2,22,54},
		{13,14,19,12,13},
		{123,124,119,11,14},
		{113,14,114,21,10}

	};


	// int arr[3][5]={
	// 	{3,4,6,5,22},
	// 	{1,9,2,22,54},
	// 	{13,14,19,12,13}
	// 	// {123,124,119,11,14},
	// 	// {113,14,114,21,10}

	// };
	int cols=5;
	int rows=5;
	// 	int cols=5;
	// int rows=3;
	spiralprint(arr,cols,rows);




	return 0;
}