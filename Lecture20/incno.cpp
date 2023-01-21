#include<iostream>
using namespace std;
void incorder(int n){
	// base case
	if(n==0){
		return;
	}
	// rec case
	incorder(n-1);
	cout<<n<<endl;
	

}
int main(){	
	int n;
	cin>>n;//5
	incorder(n);




	return 0;
}