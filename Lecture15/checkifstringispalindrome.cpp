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
bool palindromeornot(char *arr){
	int i=0;
	int j=length(arr)-1;//7
// \loop
	while(i<j){

	if(arr[i]==arr[j]){
		i++;
		j--;
	}
	else{
		return false;
	}

	}
	return true;
}

int main(){
	char arr[1000];
	cin.getline(arr,1000);
	if(palindromeornot(arr)==true){
		cout<<"palindrome"<<endl;

	}
	else{
		cout<<"not palindrome"<<endl;

	}
	

	return 0;
}