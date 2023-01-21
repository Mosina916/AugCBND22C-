#include<iostream>
#include<climits>
using namespace std;
int main(){
	// int arr[]={5,4,3,2,1};
	// int arr[]={5,1,2,3,4};

	int arr[]={3,0,1,1,4,5,4,6,2,8,7,9,45};
	int te=sizeof(arr)/sizeof(int);
// optimised bubble sort
	for(int i=0;i<=te-2;i++){//
		bool kyaswaphuvayanahiabhtak=false;
		for(int j=0;j<=te-i-2;j++){
			if(arr[j]>arr[j+1]){
				kyaswaphuvayanahiabhtak=true;
				swap(arr[j+1],arr[j]);
			
			}
<<<<<<< HEAD
			
=======
>>>>>>> ca09af3bd15ee1dde459562ba4f982b07b148084
		}
		if(kyaswaphuvayanahiabhtak==false){
			break;

		}


		//1 2 3 4 5



	}

// print array
	for(int i=0;i<te;i++){
		cout<<arr[i]<<" ";
	}


	return 0;
}