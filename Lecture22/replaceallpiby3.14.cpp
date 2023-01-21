#include<iostream>
using namespace std;
string replaceallpi(string s){ //pi
	// base case
	if(s.length()<=1){
		return s;
	}


	// rec case
	string cs=s.substr(0,2);//pi
	if(cs=="pi"){
		return "3.14"+replaceallpi(s.substr(2)); //3.14x3.14d

	}
	else{
		return s[0]+replaceallpi( s.substr(1));
	}
}
int main()
{

	string s;
	cin>>s;//"pppixpid";-->p3.14x3.14d "codingblocks"

	// s.substr(3,2)
	cout<<replaceallpi(s)<<endl;




	

	return 0;
}