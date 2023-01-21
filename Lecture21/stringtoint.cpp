#include<iostream>
using namespace std;
int stringtoint(string s,int len){
	// base case
	if(len==0){
		return 0;
	}


	// rec case
	char ch=s[len-1];//'4'
	int n=ch-'0';
	return stringtoint(s,len-1)*10+n;

}

int main(){
	string s;
	cin>>s;//"1264"
	// cout<<s<<endl;
	// s/10;
	// s+10;//"1264"+"10"
	int len=s.length();
	cout<<stringtoint(s,len)+10<<endl;

	


	return 0;
}