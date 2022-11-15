#include<iostream>
using namespace std;
void waveprint(int arr[4][5],int cols,int rows){
	for(int colno=0;colno<cols;colno++){
		if(colno%2==0){
		// even-->downward
		for(int rowno=0;rowno<rows;rowno++){
			cout<<arr[rowno][colno]<<" ";

		}
		
	}
	else{
		// odd-->upward
		for(int rowno=rows-1;rowno>=0;rowno--){
			cout<<arr[rowno][colno]<<" ";

		}
		
	}

	}
	
}
int main(){
	
	int arr[4][5]={
		{3,4,6,5,22},
		{1,9,2,22,54},
		{13,14,19,12,13},
		{123,124,119,11,14}

	};
	int cols=5;
	int rows=4;
	waveprint(arr,cols,rows);




	return 0;
}