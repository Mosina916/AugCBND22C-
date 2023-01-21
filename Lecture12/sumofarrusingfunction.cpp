#include<iostream>
using namespace std;

int sumofarr(int arr[],int n){
	int sum=0;
	for(int i=0;i<=n-1;i++){
		sum=sum+arr[i];
	}

	return sum;
}
int main(){
	int arr[]={3,5,6,7,8};
	int n=sizeof(arr)/sizeof(int);

	cout<<sumofarr(arr,n);
	cout<<endl;
	


	return 0;
}