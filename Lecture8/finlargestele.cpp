#include<iostream>
#include<climits>
using namespace std;
int main(){
	// int arr[]={3,1,26,10,2};
	int arr[]={-3,-1,-26,-10,-2};
	int te=sizeof(arr)/sizeof(int);//20/4-->5
	// int largest=arr[0];//3

	// for(int i=1;i<=te-1;i++){
	// 	if(arr[i]>largest){
	// 	largest=arr[i];

	// }

	// }
	// cout<<largest<<endl;

	int largest=INT_MIN;//

	for(int i=0;i<=te-1;i++){
		if(arr[i]>largest){
		largest=arr[i];

	}

	}
	cout<<largest<<endl;
	


	return 0;
}