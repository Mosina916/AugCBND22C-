#include<iostream>
#include<cmath>
using namespace std;
void toh(int n,char src,char helper,char dest){
	// base case
	if(n==0){
		return;
	}
	// rec case
	toh(n-1,src,dest,helper);

	cout<<"move disk no "<<n<<" from "<<src<<" to "<<dest<<endl;
	toh(n-1,helper,src,dest);
}
int main()
{	
	int n;
	cin>>n;
	toh(n,'A','B','C');
	cout<<pow(2,n)-1<<endl;

	return 0;
}