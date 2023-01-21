#include<iostream>
#include<climits>
using namespace std;
int main(){
	int arr[]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);

	for(int i=0;i<=n-2;i++){//

	for(int j=0;j<=n-i-2;j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
	}
}
// print array
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}





	return 0;
}