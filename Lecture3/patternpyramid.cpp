#include<iostream>
using namespace std;
int main(){
	int trows;
	cin>>trows;


	int rowno=1;
	while(rowno<=trows){
		// spaces prin
// ====================================
	int spc=1;
	while(spc<=trows-rowno){
		cout<<" ";
		spc=spc+1;//2
	}
	// stars print
	int starco=1;
	while(starco<=2*rowno-1){
		cout<<'*';
	starco=starco+1;//4

	}
	cout<<endl;
	rowno=rowno+1;

	// ====================================




	}
	
	




	return 0;
}