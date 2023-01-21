#include<iostream>
using namespace std;
int fibo(int n){
	// base case
	if(n==0||n==1){
		return n;
	}

	// recursive case
	return fibo(n-1)+fibo(n-2);
}
// top down
int topdownfibo(int n,int *arr){
	// base case
	if(n==0||n==1){
		return arr[n]=n;
	}

	if(arr[n]!=-1){
		return arr[n];
	}
	// recursive case
	return arr[n]=topdownfibo(n-1,arr)+topdownfibo(n-2,arr);
}

int main(){
	int pos;
	cin>>pos;
	cout<<fibo(pos)<<endl;

	int *arr=new int[pos+1];

	for(int i=0;i<=pos;i++){
		arr[i]=-1;

	}
	cout<<topdownfibo(pos,arr)<<endl;

	for(int i=0;i<=pos;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;




	return 0;
}