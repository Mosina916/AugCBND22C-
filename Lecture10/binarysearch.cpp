#include<iostream>
using namespace std;
int main(){
	int arr[]={2,4,5,7,8};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;//4


	int s=0;
	int e=n-1;

	// loop
	while(s<=e){
		int mid=(s+e)/2;
	if(arr[mid]==key){
		cout<<"key is present at index "<<mid<<endl;
		break;
		// return 0;
	}
	else if(key<arr[mid]){
		e=mid-1;
	}
	else{
		s=mid+1;
	}

	}
	
	





	return 0;
}