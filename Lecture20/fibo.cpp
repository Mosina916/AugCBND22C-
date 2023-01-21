#include<iostream>
using namespace std;
// // positioning 0
// int fibo(int pos){
// 	// base case
// 	if(pos==0){
// 		return 0;

// 	}
// 	if(pos==1){
// 		return 1;
// 	}


// 	// rec case
// 	return fibo(pos-1)+fibo(pos-2);
// }

// // positioning 1
// int fibo(int pos){
// 	// base case
// 	if(pos==2){
// 		return 1;

// 	}
// 	if(pos==1){
// 		return 0;
// 	}


// 	// rec case
// 	return fibo(pos-1)+fibo(pos-2);
// }

// // positioning 0
int fibo(int pos){
	// base case
	if(pos==0){
		return 0;

	}
	if(pos==1){
		return 1;
	}
	// rec case
	return fibo(pos-1)+fibo(pos-2);
}
int main(){
	int pos;
	cin>>pos;
	cout<<fibo(pos)<<endl;

	return 0;
}