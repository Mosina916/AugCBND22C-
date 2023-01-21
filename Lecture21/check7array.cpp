#include<iostream>
using namespace std;
bool check7ispresentornot(int*arr,int n){
	// base case
	if(n==0){
		return false;
	}


	// rec case
	if(arr[0]==7){
		return true;
	}
	return check7ispresentornot(arr+1,n-1);
}
int main(){
	int arr[5]={4,5,3,7,2};
	int n=5;

	check7ispresentornot(arr,n);



	return 0;
}