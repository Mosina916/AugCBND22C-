#include<iostream>
using namespace std;

void mergeintoa(int a[8],int b[3],int m,int n){
	int i=m-1;
	int j=n-1;
	int k=m+n-1;

// loop
	while(i>=0 and j>=0){
		if(a[i]>b[j]){
		a[k]=a[i];
		i--;
		k--;

	}
	else{
		a[k]=b[j];
		k--;
		j--;
	}
	}
	// i li val -ive huvi a wali array khatam huvi
	while(j>=0){
		a[k]=b[j];
		j--;
		k--;
	}



	


}
int main(){
	int m=5;
	int n=3;
	int a[8]={2,4,7,9,13};
	int b[3]={1,5,8};
	mergeintoa(a,b,m,n);

	for(int i=0;i<m+n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	


	return 0;
}