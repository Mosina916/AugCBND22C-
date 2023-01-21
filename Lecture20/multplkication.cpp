#include<iostream>
using namespace std;
int mult(int a,int b){//3 2
	// base case
	// if (b==1)
	// {
	// 	return a;
	// }

	if (b==0)
	{
		return 0;
	}


	// rec case
	return a+mult(a,b-1);



}
int main(){
	int a,b;//3 0
	cin>>a>>b;
	multp(a,b);
	return 0;
}