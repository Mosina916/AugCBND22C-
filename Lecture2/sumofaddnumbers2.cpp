#include<iostream>
using namespace std;
int main(){

	int n,sum=0;
	cin>>n;//7
	int i=2;


// loop
	while(i<=n){
		if(i%2==1){
		sum=sum+i;
	}
	i=i+1;//4

	}
	cout<<sum<<endl;
	


	return 0;
}