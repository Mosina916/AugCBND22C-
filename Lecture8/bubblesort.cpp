#include<iostream>
#include<climits>
using namespace std;
int main(){
	int arr[]={5,4,3,2,1};
	int te=sizeof(arr)/sizeof(int);

	for(int i=0;i<=te-2;i++){//

	for(int j=0;j<=te-i-2;j++){
		if(arr[j]>arr[j+1]){
			// swap(arr[j],arr[j+1]);
	// // using extra variable 
	// 		int c=arr[j];
	// 		arr[j]=arr[j+1];
	// 		arr[j+1]=c;


			// without using extra c
			// arr[j]=arr[j]+arr[j+1];
			// arr[j+1]=arr[j]-arr[j+1];
			// arr[j]=arr[j]-arr[j+1];

			// // inbuild
			// // swap(arr[j],arr[j+1]);
			// swap(arr[j+1],arr[j]);
			// swap in one line

			arr[j+1]=(arr[j]+arr[j+1])-(arr[j]=arr[j+1]);
		}
	}
}
// print array
	for(int i=0;i<te;i++){
		cout<<arr[i]<<" ";
	}


	// 4 3 2 1 5

	// for(int j=0;j<=2;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}
	// }

	//3 2 1 4 5

	// for(int j=0;j<=1;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}
	// }

	//2 1 3 4 5

	// for(int j=0;j<=0;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}
	// }

	//1 2  3 4 5



	// // print array
	// for(int i=0;i<te;i++){
	// 	cout<<arr[i]<<" ";
	// }




	return 0;
}