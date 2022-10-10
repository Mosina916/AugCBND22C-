#include<iostream>
using namespace std;
int length(char arr[1000]){
	int count=0;
	int i=0;

	while(arr[i]!='\0'){
		count++;
		i++;


	}

	return count;
	
}

// length(char *arr){

// }
int main(){
	char arr[1000];
	cin.getline(arr,1000);
	cout<<length(arr)<<endl;

	return 0;
}