#include<iostream>
using namespace std;

void inc(int b[],int n){

	for(int i=0;i<=n-1;i++){
		b[i]=b[i]+10;

	}

	for(int i=0;i<=n-1;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
	


}
int main(){
	int arr[]={3,5,6,7,8};
	int n=sizeof(arr)/sizeof(int);

	inc(arr,n);
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	


	return 0;
}