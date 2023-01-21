// * * * * * * * 
//   * * * * *
//     * * *
//       *

#include<iostream>
using namespace std;
int main(){
	int trows;
	cin>>trows;
// upper half
	int rowno=1;
	while(rowno<=(trows+1)/2){

			// =================================
	int spc=1;
	while(spc<=(trows+1)/2-rowno){
		cout<<" ";
	spc=spc+1;//2

	}

	int startcount=1;

	while(startcount<=2*rowno-1){
		cout<<"*";
	startcount=startcount+1;//2

	}
	cout<<endl;
	rowno=rowno+1;

	// =================================


	}

	// lower part

	rowno=1;

	while(rowno<=(trows-1)/2){


		// spaces
	int spacount=1;
	while(spacount<=rowno){
		cout<<" ";
		spacount=spacount+1;
	}

	// star
	int sc=1;
	while(sc<=trows-2*rowno){
		cout<<'*';
		sc=sc+1;

	}
	cout<<endl;
	rowno=rowno+1;

	}

	

	
	

	


	
	



	return 0;
}