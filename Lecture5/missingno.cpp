#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;//10^8
	// sum of 1st n natural no 
	// int sum=n*(n+1)/2;//15
	long long int sum=n*(n+1)/2;//15


	int i=1;
	int x;

	// while(i<=n-1){
	while(i<n){
		cin>>x;//\1
	sum=sum-x;//13-4-->9-5-->4-1-->3
	i++;//5

	}

	cout<<sum<<endl;
	








	return 0;
}