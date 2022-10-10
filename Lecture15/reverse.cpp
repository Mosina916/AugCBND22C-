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

void reverse(char A[1000]){
	int i=0;
	int j=length(A)-1;

	// loop
	while(i<j){
		swap(A[i],A[j]);
	i++;
	j--;

	}
	
}


void copy(char A[1000],char B[1000]){
	int i=0;
	int j=0;

	while(j<=length(B)){
		A[i]=B[j];
		i++;
		j++;

	}
	

}



int main(){
	char A[1000];

	char B[1000];
	cin.getline(B,1000);

	copy(A,B);


	cout<<A<<endl;
	cout<<B<<endl;

	// cout<<A<<endl;
	// reverse(A);

	// cout<<A<<endl;
	

	return 0;
}