#include<iostream>
using namespace std;
int fact(int n){
	// step 1:base case
	if(n==0){
		return 1;
	}

	// // step2: recursive case
	// int chotans=fact(n-1);//pure assumption 24
	// // step prrof
	// int finalans=n*chotans;
	// return finalans;

	return n*fact(n-1);

}
int main(){
	int n;
	cin>>n;//5
	cout<<fact(n)<<endl;




	return 0;
}