#include<iostream>
using namespace std;
// void add(int b[],int n){
// 	for (int i = 0; i <n; ++i)
// 	{
// 		b[i]=b[i]+10;
// 	}
// }

void add(int *b,int n){
	for (int i = 0; i <n; ++i)
	{
		// b[i]=b[i]+10;
		*(b+i)=*(b+i)+10;
	}
}
int main(){
	// int arr[]={1,3,4,6,2};
	// int n=sizeof(arr)/sizeof(int);

	int n;
	cin>>n;
	int arr[100];
	// for (int i = 0; i <n; ++i)
	// {
	// 	cin>>arr[i];
	// }

	for (int i = 0; i <n; ++i)
	{
		cin>>*(arr+i);
	}

	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	add(arr,n);

	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;


	


	return 0;
}