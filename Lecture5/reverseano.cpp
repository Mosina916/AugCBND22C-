#include<iostream>
using namespace std;
int main(){
	int  no;
	cin>>no;//345-->543
	int rev=0;
	// int n=10

	for(;no>0;no=no/10){
		int l=no%10;//5
	rev=rev*10+l;//5
	}

	cout<<rev<<endl;


	// while(no>0){
	// 	int l=no%10;//5
	// rev=rev*10+l;//5
	// // no=no/10;//0

	// }
	






	
	

	


	return 0;
}