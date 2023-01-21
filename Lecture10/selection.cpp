#include<iostream>
using namespace std;
int main(){
	int arr[]={4,4,4,3,2,1,9,0,7,5,4,3,3,1,2,5};
	int n=sizeof(arr)/sizeof(int);

	for(int place=0;place<=n-2;place++){
		int min=place;//1
		for(int j=place+1;j<=n-1;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		swap(arr[place],arr[min]);

	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;
	



	return 0;
}