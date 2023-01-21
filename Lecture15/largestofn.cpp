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
	int n;
	cin>>n;//4
	cin.ignore();

	char arr[1000];
	cin.getline(arr,1000);//pen

	char abhitakkilargeststring[1000];//pen
	copy(abhitakkilargeststring,arr);
	int abhitakkimaxlen=length(arr);//3



// loop
	for(int i=1;i<=n-1;i++){
		cin.getline(arr,1000);//hello elehant rat
	int len=length(arr);//3
	if(len>abhitakkimaxlen){
		copy(abhitakkilargeststring,arr);
		abhitakkimaxlen=len;
	}

	}


	cout<<abhitakkilargeststring<<endl;
	cout<<abhitakkimaxlen<<endl;
	








	

	return 0;
}