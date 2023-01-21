#include<iostream>
using namespace std;
int fact(int n);//forward decleration
int ncr(int n,int r){
	int finalans=fact(n)/(fact(r)*fact(n-r));
	return finalans;
}
int fact(int n){
	
	int ans=1;
	for(int i=n;i>=1;i--){//7
	ans=ans*i;
	}

	// cout<<ans<<endl;
return ans;

}

int main(){
	int n,r;
	cin>>n>>r;//7
	cout<<ncr(n,r)<<endl;
	




	return 0;
}