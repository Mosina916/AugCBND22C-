#include<iostream>
using namespace std;
int sumofdigits(int n){
	// step 1:base case
	if(n==0){
		return 0;
	}
	

	// rec case
	return n%10+sumofdigits(n/10);
	

}
int main(){
	int n;
	cin>>n;//1634
	cout<<sumofdigits(n)<<endl;




	return 0;
}