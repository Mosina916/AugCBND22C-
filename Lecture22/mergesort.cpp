#include<iostream>
using namespace std;
void mergetwosortedarray(int arr[],int s,int e){
	int temp[1000];
	int i=s;
	int mid=(s+e)/2;
	int j=mid+1;
	int k=s;

	while(i<=mid and j<=e){
		if(arr[i]<arr[j]){
		temp[k]=arr[i];
		i++;
		k++;

	}
	else{
		temp[k]=arr[j];
		k++;
		j++;
	}

	}
	// pehli wali array khatam huvi mtlb i ki value n
	while(j<=e){
		temp[k]=arr[j];
	k++;
	j++;

	}

		//arr2 wali array khatam huvi mtlb j ki value m
	while(i<=mid){
		temp[k]=arr[i];
	k++;
	i++;
	

	}

	// temp se arr mai wapas copy kar rahe haiu
	for(int l=s;l<=e;l++){
		arr[l]=temp[l];
	}


	// for (int i = 0; i <m+n; ++i)
	// {
	// 	cout<<temp[i]<<" ";
	// }
	// cout<<endl;
	
}
void mergesort(int arr[],int s,int e){
	// base case
	if(s==e){
		return;
	}

	// rec case
	// step 1: divide through mid
	int mid=(s+e)/2;


	// step 2: sort 2 divide parts
	mergesort(arr,s,mid);
	mergesort(arr,mid+1,e);


	// step 3:merge two sortedparts

	mergetwosortedarray(arr,s,e);

}



int main()
{

	int arr[]={3,4,1,1,1,0,5,3,2,1,5,2};
	int n=sizeof(arr)/sizeof(int);

	mergesort(arr,0,n-1);


	for (int i = 0; i <n; ++i)
		{
			cout<<arr[i]<<" ";
		}

		cout<<endl;	



	return 0;
}