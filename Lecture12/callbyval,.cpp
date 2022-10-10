#include<iostream>
using namespace std;
void f(int x){
	a=a+100;
	cout<<"inside a : "<<a<<endl;//110
}
int main(){


	int a=10;
	cout<<"Before : "<<a<<endl;//10
	f(a);

	cout<<"after : "<<a<<endl;//110 10



	return 0;
}