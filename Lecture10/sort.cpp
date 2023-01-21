#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[]={4,4,4,3,2,1,9,0,7,5,4,3,3,1,2,5};
	int n=sizeof(arr)/sizeof(int);
	// sort(arrayname,arrayname+sizeofarr);
	sort(arr,arr+n);

	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	

















	return 0;
}