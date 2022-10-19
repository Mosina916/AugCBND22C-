#include<iostream>
using namespace std;
bool checkifkeyispresentornot(int arr[3][3],int key){

	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
		if(arr[i][j]==key){
			cout<<"key is present at index "<<i<<" "<<j<<endl;
			return true;

	}


	}

	}


	return false;
	
	

}
int main(){
	int arr[3][3]={
		{3,4,6},
		{1,9,2},
		{13,14,19}

	};
	int rows=3,cols=3;
	int key;
	cin>>key;//9

	if(checkifkeyispresentornot(arr,key)==false){
		cout<<"key is not present"<<endl;

	}



	return 0;
}