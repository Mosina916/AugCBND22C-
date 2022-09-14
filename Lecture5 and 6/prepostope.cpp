#include <iostream>
using namespace std;

int main()
{
	int a=90,b=39,c=0,d=-1,e=1;
	if(a++ and b-- and c-- and --e){
		cout<<"hello"<<endl;
	}
	else if(++c and ++d and c++){
		cout<<"world"<<endl;

	}

	else if(--c and d-- and a++){
		cout<<"coding blocks"<<endl;

	}
	else if(e-- and e++ and ++e){
		cout<<"class"<<endl;

	}
	else{
		cout<<"board"<<endl; 
	}
	cout<<"value of a is "<<a<<endl;
	cout<<"value of b is "<<b<<endl;
	cout<<"value of c is "<<c<<endl;
	cout<<"value of d is "<<d<<endl;
	cout<<"value of e is "<<e<<endl;






	return 0;
}