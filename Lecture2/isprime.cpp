#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;//2

	int i=2;
while(i<n){//2<2

	if(n%i==0){//5%4==
		cout<<"not prime"<<endl;
		return 0;

	}
	i=i+1;//5

}
cout<<"prime"<<endl;
	
	return 0;
}