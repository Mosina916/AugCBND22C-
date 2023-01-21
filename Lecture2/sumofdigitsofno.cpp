#include<iostream>
using namespace std;
int main(){

	int n;
<<<<<<< HEAD
	cin>>n;
	int sum=0;

	while(n>0){
		int last=n%10;
	sum=sum+last;
=======
	cin>>n;//341-->3+4+1-->8
	int sum=0;

	while(n>0){
		int last=n%10;//341%10-->1
	sum=sum+last;//0+1=1
>>>>>>> ca09af3bd15ee1dde459562ba4f982b07b148084
	n=n/10;

	}

	cout<<sum<<endl;
	
	



	return 0;
}