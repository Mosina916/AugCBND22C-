#include<iostream>
using namespace std;
int main(){
	// int arr[10]={3,2,4,6,5,7,8,1,7,2};

	// for(int i=9;i>=0;i--){
	// 	cout<<arr[i]<<" ";

	// }

	int arr[1000];
	int n;
	cin>>n;//5

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int i=n-1;i>=0;i--){
		cout<<arr[i]<<" ";

	}

	



	return 0;
}