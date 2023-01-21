#include<iostream>
using namespace std;

int z=780;//global variable

// ::-->scope resolution operatro


int main(){

	int a=10;
	// int z=465;

	int b=20;
	float c=80.34;
	int d=9;
	if(a>=10){
		a=56;
		int b=49;
		int e=78;
		cout<<a<<endl;
		cout<<b<<endl;
		cout<<c<<endl;
		cout<<d<<endl;
		cout<<e<<endl;
		cout<<::z<<endl;
		::z=::z+60;//780+60
		cout<<::z<<endl;

	}
	else{
		int a=9;
		int d=96;
		int b=49;
		float z=45.3;
		cout<<a<<endl;
		cout<<b<<endl;
		cout<<c<<endl;
		cout<<d<<endl;
		// cout<<e<<endl;
		cout<<z<<endl;
		

	}
	cout<<a<<endl;
		cout<<b<<endl;
		cout<<c<<endl;
		cout<<d<<endl;
		cout<<::z<<endl;


			
		// cout<<z<<endl;
		
	

	return 0;
}