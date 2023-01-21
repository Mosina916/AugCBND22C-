#include<iostream>
using namespace std;
int main(){

	char ch;
	cin>>ch;//'C'
	// ch A-Z-->uppercase
	// if(ch>='A' and ch<='Z'){//implicit type conversion
	// 	cout<<"UPPERCASE"<<endl;
	// }
	// else if(ch>='a' and ch<='z'){
	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"invalid char"<<endl;
	// }

	// if(ch>=65 and ch<=90){//implicit type conversion
	// 	cout<<"UPPERCASE"<<endl;
	// }
	// else if(ch>=97 and ch<=122){
	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"invalid char"<<endl;
	// }
	

	if(isupper(ch)){//implicit type conversion
		cout<<"UPPERCASE"<<endl;
	}
	else if(islower(ch)){
		cout<<"lowercase"<<endl;

	}
	else{
		cout<<"invalid char"<<endl;
	}

	


	return 0;
}