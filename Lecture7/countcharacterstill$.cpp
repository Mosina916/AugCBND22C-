#include<iostream>
using namespace std;
int main(){
	int co=0;

	char ch;
	// cin>>ch;//h
	ch=cin.get();
	// loop
	while(ch!='$'){
		co++;//1
	// cin>>ch;//
		ch=cin.get();

	}
	cout<<co<<endl;
	return 0;
}