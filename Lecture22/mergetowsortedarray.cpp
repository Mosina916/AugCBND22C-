#include<iostream>
using namespace std;
void mergetwosortedarray(int arr1[3],int arr2[4],int n,int m){
	int temp[1000];
	int i=0;
	int j=0;
	int k=0;

	while(i<n and j<m){
		if(arr1[i]<arr2[j]){
		temp[k]=arr1[i];
		i++;
		k++;

	}
	else{
		temp[k]=arr2[j];
		k++;
		j++;
	}

	}
	// pehli wali array khatam huvi mtlb i ki value n
	while(j<m){
		temp[k]=arr2[j];
	k++;
	j++;

	}

		//arr2 wali array khatam huvi mtlb j ki value m
	while(i<n){
		temp[k]=arr1[i];
	k++;
	i++;
	

	}


	for (int i = 0; i <m+n; ++i)
	{
		cout<<temp[i]<<" ";
	}

	cout<<endl;
	


	
}
int main()
{
	int arr1[3]={1,5,7};
	int n=3;
	int arr2[4]={2,4,8,10};
	int m=4;
	mergetwosortedarray(arr1,arr2,n,m);
	return 0;
}