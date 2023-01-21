#include<iostream>
using namespace std;
int main(){
	int trows;
	cin>>trows;//5


	int rowno=1;
	while(rowno<=trows){
		// ====================================
	// spaces print
	int spc=1;

	while(spc<=trows-rowno){
		cout<<" "<<'\t';
	spc=spc+1;//3
	}
	// inc numbers
	int startno=1;//wo no ki value kya hai
	int incco=1;//pehla inc no print hoga

	while(incco<=rowno){
		cout<<startno<<'\t';
	startno=startno+1;//4
	incco=incco+1;//4
	}
	// dec numbers
	int decval=startno-2;//2
	int decco=1;

	while(decco<=rowno-1){
		cout<<decval<<'\t';
	decval=decval-1;//1
	decco=decco+1;//2
	}
	
	cout<<endl;
	rowno=rowno+1;
// ====================================	
	}
	
	



	return 0;
}