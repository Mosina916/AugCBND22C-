#include<iostream>
using namespace std;
int main(){
	int trows;
	cin>>trows;//5

	// odd row
	int rowno=1;
	while(rowno<=trows){

		if(rowno%2==0){
		// row is even
			int startno=0;
			int place=1;

			while(place<=rowno){
				cout<<startno<<" ";//0 1 0 1
			place=place+1;//5
			// if(startno==0){
			// 	startno=1;
			// }
			// else{
			// 	startno=0;
			// }
			startno=1-startno;


			}
			cout<<endl;
			rowno=rowno+1;
			
	}
	else{
		// row is odd
		int startno=1;
		int place=1;

		while(place<=rowno){
			cout<<startno<<" ";//1 0 1
		place=place+1;//4
		// if(startno==1){
		// 	startno=0;
		// }
		// else{
		// 	startno=1;
		// }
		startno=1-startno;

		}
		cout<<endl;
		rowno=rowno+1;//4
		

	}


	}
	



	return 0;
}