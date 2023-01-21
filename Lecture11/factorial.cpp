#include<iostream>
using namespace std;

int fact(int n){
	
	int ans=1;
	for(int i=n;i>=1;i--){//7
	ans=ans*i;
	}

	// cout<<ans<<endl;
return ans;

}
int main(){
	int n;
	cin>>n;//7
	cout<<fact(n)<<endl;
	




	return 0;
}