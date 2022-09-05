#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;//11
	int kitnedecimalpoints;
	cin>>kitnedecimalpoints;//2


	float i=0;
	float inc=1;

	int co=0;
	while(co<=kitnedecimalpoints){
		// loop
	while(i*i<=n){
		i=i+inc;//3.3+0.01-->3.31+0.01-->3.32
	}
	i=i-inc;//3.31
	inc=inc/10;//0.001
	co=co+1;

	}


	cout<<i<<endl;

	



	return 0;
}