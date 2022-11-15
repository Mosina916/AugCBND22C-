#include <iostream>
using namespace std;
int totalways(int n,int maxjumps){//1
	// base case
	// if(n==3){
	// 	return 4;
	// }
	// if(n==2){
	// 	return 2;
	// }
	// if(n==1){
	// 	return 1;
	// }
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}



	// rec case

	// return totalways(n-1)+totalways(n-2)+totalways(n-3)+totalways(n-4);
	int sum=0;
	for(int i=1;i<=maxjumps;i++){
		sum=sum+totalways(n-i,maxjumps);
	}
	return sum;
}
int main(){
	int n;
	cin>>n;
	int maxjumps;
	cin>>maxjumps;//4
	cout<<totalways(n,maxjumps)<<endl;
	



	return 0;
}