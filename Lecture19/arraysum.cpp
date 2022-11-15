#include<iostream>
using namespace std;
int sum(int *arr,int n){
	// base case
	if(n==0){
		return 0;
	}

	// recursive case
	

	return arr[0]+sum(arr+1,n-1);

}
// int sum2(int *arr,int n){
// 	// base case
// 	if(n==1){
// 		return arr[0];
// 	}

// 	// recursive case
	

// 	return arr[0]+sum2(arr+1,n-1);
// }

int sum3(int *arr,int n){
	// base case
	if(n==0){
		return 0;
	}
	// recursive case
	return arr[n-1]+sum(arr,n-1);

}
int main(){
	int arr[]={2,4,1,1,10};//18
	int n=sizeof(arr)/sizeof(int);

	cout<<sum(arr,n)<<endl;
	cout<<sum3(arr,n)<<endl;
	return 0;
}