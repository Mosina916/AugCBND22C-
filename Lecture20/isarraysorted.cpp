#include<iostream>
using namespace std;
bool isarraysortedornot(int *arr,int n){
	// base case
	if(n==1){
		return true;
	}

	// recursive case
	if(isarraysortedornot(arr+1,n-1) and arr[0]<=arr[1]){
		return true;
	}

	return false;
}

bool isarraysortedornot2(int *arr,int n){
	// base case
	if(n==1){
		return true;
	}

	// recursive case
	if(isarraysortedornot2(arr,n-1) and arr[n-2]<=arr[n-1]){
		return true;
	}

	return false;

}

bool isarraysortedornot3(int*arr,int n,int i){
	// base case
	if(i==n-1){
		return true;
	}


	// rec case
	if(arr[i]<=arr[i+1] and isarraysortedornot3(arr,n,i+1)){
		return true;
	}
	return false;

}

int main(){
	int arr[]={2,4,2,6,8,10};
	int n=sizeof(arr)/sizeof(int);
	if(isarraysortedornot3(arr,n,0)==true){
		cout<<"sorted"<<endl;
	}
	else{
		cout<<"not sorted"<<endl;
	}



	// if(isarraysortedornot2(arr,n)==true){
	// 	cout<<"sorted"<<endl;
	// }
	// else{
	// 	cout<<"not sorted"<<endl;
	// }



	




	return 0;
}