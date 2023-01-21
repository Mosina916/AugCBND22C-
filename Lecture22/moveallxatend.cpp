#include<iostream>
using namespace std;
string moveallxatend(string s){
	// base case
	if(s.length()==0){
		return "";
	}


	// rec case
	string chotaans=moveallxatend(s.substr(1));
	char ch=s[0];//p
	if(ch=='x'){
		// peecche laga lo
		return chotaans+ch;
	}
	else{
		// aage laga lo
		return ch+chotaans;
	}
}
int main()
{

	string s;
	cin>>s;//"xpxc";
	cout<<moveallxatend(s)<<endl;




	

	return 0;
}