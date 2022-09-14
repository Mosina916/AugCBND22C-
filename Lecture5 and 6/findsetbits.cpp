#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	int co=0;

	while(n>0){
		if((n&1)==1){
		co=co+1;//2

	}
	n=n>>1;//1001>>1-->100

	}

	cout<<co<<endl;
	

	return 0;
}