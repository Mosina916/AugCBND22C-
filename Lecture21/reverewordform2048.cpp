#include<iostream>
using namespace std;
string arr[]={"zero","one","two","Three","four","five","six","seven","eight","nine"};
void wordformreverse(int n){
	
	// base case
	if(n==0){
		return;
	}


	// rec case
	int index=n%10;//8
	cout<<arr[index]<<" ";
	wordformreverse(n/10);

}
int main(){
	int  n=2048;
	wordformreverse(n);


	return 0;
}