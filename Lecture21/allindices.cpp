#include<iostream>
using namespace std;
void allindices(int*arr,int n,int i){
	// base case
	if(i==n){
		return;
	}
	
	
	// rec case
	if(arr[i]==7){
		cout<<i<<" ";
	}
	allindices(arr,n,i+1);
	
}
int main(){
	int arr[]={4,5,7,7,79,2,7};
	int n=sizeof(arr)/sizeof(int);

	allindices(arr,n,0);
	



	return 0;
}