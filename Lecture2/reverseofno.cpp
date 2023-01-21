#include<iostream>
using namespace std;
int main(){

	int n,rev=0;
	cin>>n;//642

// loop
	while(n>0){
		int ld=n%10;//64%10 6

	rev=rev*10+ld;//246
	n=n/10;//0

	}

	cout<<rev<<endl;
	
	


	return 0;
}