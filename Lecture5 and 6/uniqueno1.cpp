#include <iostream>
using namespace std;

int main()
{
	int ans=0;

	int n,x;
	cin>>n;
	int i=1;//pehla no le rahe hai

	while(i<=n){
		cin>>x;//3
	ans=ans^x;//0^3-->3^5-->6^9-->15^13-->2^5-->7^9-->14^3-->13
	// i=i+1;
	i++;//8

	}

	cout<<ans<<endl;
	








	return 0;
}