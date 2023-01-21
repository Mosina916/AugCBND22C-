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

void append(char A[1000],char B[1000]){

	int i=length(A);
	int j=0;

	while(j<=length(B)){
		A[i]=B[j];
	i++;
	j++;


	}
	

}




int main(){
	char A[1000];
	cin.getline(A,1000);
	char B[1000];
	cin.getline(B,1000);
	append(A,B);

	cout<<A<<endl;
	cout<<B<<endl;
	
	

	return 0;
}