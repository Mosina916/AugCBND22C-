#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;//10^8
	int ans=0;

	int i=1;

	while(i<=n){
		ans=ans^i;//0^1
	i++;

	}


	int co=1;//pehla no le rahe hai

	int x;

	// while(co<=n-1){
	while(co<n){
		cin>>x;//2^4
	ans=ans^x;
	co++;

	}

	cout<<ans<<endl;
	



	







	return 0;
}