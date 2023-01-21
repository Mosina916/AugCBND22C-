#include<iostream>
#include<climits>
using namespace std;
// void bubblesortrec(int *arr,int n,int i){
// 	// base case
// 	if(i==n-1){
// 		return;
// 	}



// 	// rec case
// 	for(int j=0;j<=n-i-2;j++){
// 		if(arr[j]>arr[j+1]){
// 			swap(arr[j],arr[j+1]);
// 		}
// 	}
// 	//4 3 2 1 5
// 	bubblesortrec(arr,n,i+1);
// }
void bubblesortrec(int *arr,int n,int i,int j){
	// base case
	if(i==n-1){
		return;
	}

	if(j==n-i-1){
		bubblesortrec(arr,n,i+1,0);

	}
	else{
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
		bubblesortrec(arr,n,i,j+1);

	}



	
}
int main(){
	int arr[]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);

	// bubblesortrec(arr,n,0);

bubblesortrec(arr,n,0,0);
// print array
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}





	return 0;
}