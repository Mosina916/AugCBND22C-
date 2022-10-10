#include<iostream>
using namespace std;
// int sum(int a,int b){
// 	return a+b;
// }
// int sum(int a,int b,int c){
// 	return a+b+c;
// }
// int sum(int a,int b,int c,int d){
// 	return a+b+c+d;
// }
// default variables
int sum(int a=0,int b=0,int c=0,int d=0,int e=0,int f=0){
	return a+b+c+d+e+f;
}
int main(){
	cout<<sum(2,3)<<endl;
	cout<<sum(3,4,2)<<endl;
	cout<<sum(3,4,2,1)<<endl;


	return 0;
}