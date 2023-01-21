#include<iostream>
using namespace std;
int main(){
	int trows;
	cin>>trows;//5


	// row no 3

	int rowno=1;
	while(rowno<=trows){
		// ========================================
	int sno=1;
	int costar=1;//pehla star print kar rahe hai
	while(costar<=rowno){
		// cout<<'*'<<" ";

		cout<<sno<<" ";
		costar=costar+1;
		sno=sno+1;

	}
	cout<<endl;
	rowno=rowno+1;//4

	// ========================================


	}
	

	


	return 0;
}