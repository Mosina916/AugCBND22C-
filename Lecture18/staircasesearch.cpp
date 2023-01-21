#include<iostream>
using namespace std;
bool staircaseserach(int arr[4][5],int key,int tcols,int trows){
	int i=0;
	int j=tcols-1;

	while(i<trows and j>=0){
		// key is equal to element at i and j
	if(key==arr[i][j]){

		cout<<"key is present at index "<<i<<" "<<j<<endl;
		return true;

	}

	// key is > to element at i and j
	else if(key>arr[i][j]){
		i++;
	}

	// key is < to element at i and j
	else{
		j--;
	}

	}

	return false;
	


}


int main(){
	
	int arr[4][5]={
		{3,4,5,6,12},
		{5,6,7,8,18},
		{11,13,14,15,21},
		{12,14,19,20,31}

	};
	int cols=5;
	int rows=4;
	int key;
	cin>>key;
	if(staircaseserach(arr,key,cols,rows)==false){
		cout<<"key is not present"<<endl;
	}
	




	return 0;
}