#include <iostream>
using namespace std;
int totalways(int n){
	// // base case
	// if(n==2){
	// 	return 2;
	// }
	// if(n==1){
	// 	return 1;
	// }
	// if(n==0){
	// 	return 1;
	// }

	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}



	// rec case
	return totalways(n-1)+totalways(n-2)+totalways(n-3);
}
int main(){
	int n;
	cin>>n;
	cout<<totalways(n)<<endl;
	



	return 0;
}