#include<iostream>
using namespace std;
int main(){
	int arr[]={4,4,4,3,2,1,9,0,7,5,4,3,3,1,2,5};
	int n=sizeof(arr)/sizeof(int);
	int j;
	for(int index=1;index<=n-1; index++){
		int ele=arr[index];//1
		
	for(j=index-1;j>=0;j--){
		if(arr[j]>ele){
		arr[j+1]=arr[j];
	}
	else{
		break;
	}

	}
	arr[j+1]=ele;
	

	}


	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	

















	return 0;
}