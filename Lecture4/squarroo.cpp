#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;//9
	int i=0;
	while(i*i<=n){
		i=i+1;//4
	}
	cout<<i-1<<endl;


	return 0;
}