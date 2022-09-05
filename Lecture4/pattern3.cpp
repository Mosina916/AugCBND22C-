#include<iostream>
using namespace std;
int main(){
	int trows;
	cin>>trows;//5

	// row no 1 k lye kaam karugi alg se
	int rowno=1;

	int sp=1;
	while(sp<=trows-1){
		cout<<" ";
	sp=sp+1;//2

	}
	// star
	int stc=1;
	while(stc<=trows){
		cout<<'*';
	stc=stc+1;
	

	}

	cout<<endl;
	rowno=rowno+1;//2

	while(rowno<=trows-1){

		// spaces
	int spp=1;
	while(spp<=trows-rowno){
		cout<<" ";
		spp=spp+1;
	}

	cout<<'*';

	// spaces
	int spa=1;
	while(spa<=trows-2){
		cout<<" ";
		spa=spa+1;
	}

	cout<<'*';
	cout<<endl;
	rowno=rowno+1;


	}


	// last row


	int spcou=1;
	while(spcou<=trows){
		cout<<'*';
		spcou=spcou+1;
	}
	cout<<endl;


	return 0;
}