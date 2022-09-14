#include<iostream>
using namespace std;
int main(){
	// print numbers from 1 to n
	int n;
	cin>>n;//8
	
	
	// for(int i=1;i<=n;i=i+1){
	// 	if(i==5||i==7){
	// 		// cout<<"hello"<<endl;
	// 		continue;
			
	// 	}
	// 	cout<<i<<" ";


	// }


	// for(int i=1;i<=n;i=i+1){
	// 	cout<<i<<" ";
	// 	if(i==7){
	// 		break;
	// 	}
		


	// }
	// int i=1;
	// while(i<=n){
	// 	cout<<i<<" ";
	// 	if(i==7){
	// 		break;
	// 	}
	// 	i=i+1;
		


	// }

	int i=1;
	while(i<=n){

		if(i==7){
			i=i+1;
			continue;
		}

			cout<<i<<" ";
	
		
		i=i+1;
		


	}





	return 0;
}
	

