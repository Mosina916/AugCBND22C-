#include<iostream>
using namespace std;
int lastindexof7(int*arr,int n,int i){
	// base case
	if(i<0){
		return -1;

	}
	// rec case
	if(arr[i]==7){
		return i;
	}
	return lastindexof7(arr,n,i-1);
}
int main(){
	int arr[]={4,5,7,7,79,2};
	int n=sizeof(arr)/sizeof(int);

	int index=lastindexof7(arr,n,n-1);
	if(index<0){
		cout<<"7 is not present"<<endl;
	}
	else{
		cout<<"7 is  last present at "<<index<<endl;

	}



	return 0;
}