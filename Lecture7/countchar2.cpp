#include<iostream>
using namespace std;
int main(){
	int countaplha=0;
	int countdigit=0;
	int countspecial=0;
	int countwhitespaces=0;

	char ch;
	// cin>>ch;//h
	ch=cin.get();
	// loop
	while(ch!='$'){
		if((ch>='A' and ch<='Z')||(ch>='a' and ch<='z')){
			countaplha++;
		}
		else if(ch>='0' and ch<='9'){
			countdigit++;
		}
		else if(ch==' '||ch=='\t'||ch=='\n'){
			countwhitespaces++;
		}
		else{
			countspecial++;
		}
		ch=cin.get();

	}
	cout<<countaplha<<endl;
	cout<<countdigit<<endl;
	cout<<countwhitespaces<<endl;
	cout<<countspecial<<endl;
	return 0;
}