#include<iostream>
using namespace std;
int main(){
	int arr[]={3,1,6,0,2};
	int te=sizeof(arr)/sizeof(int);//20/4-->5
	int key;
	cin>>key;//9
	int i;

	for(i=0;i<te;i++){
		if(arr[i]==key){
		cout<<"key is present at  index "<<i<<endl;
		break;

	}

	}
	// int i;
	if(i==te){
		cout<<"key is not present"<<endl;
	}

	






	return 0;
}