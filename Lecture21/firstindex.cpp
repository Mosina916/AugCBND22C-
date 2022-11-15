#include<iostream>
using namespace std;
int firstindexof7(int*arr,int n,int i){
	// base case
	if(i==n){
		return -10;
	}
	

	// rec case
	if(arr[i]==7){
		return i;
	}
	return firstindexof7(arr,n,i+1);
}
int main(){
	int arr[5]={4,5,7,9,2};
	int n=5;

	int index=firstindexof7(arr,n,0);
	if(index<0){
		cout<<"7 is not present"<<endl;
	}
	else{
		cout<<"7 is  first present at "<<index<<endl;

	}



	return 0;
}