#include <iostream>
using  namespace std;
int length(char arr[1000]){
	int count=0;
	int i=0;

	while(arr[i]!='\0'){
		count++;
		i++;


	}

	return count;
	
}
void rotatebyn(char *arr,int n){
	int j=length(arr);//5
	int x=j;//5
	int u=j;//5
	while(j>=0){
		arr[j+n]=arr[j];
		j--;

	}
	// cout<<arr<<endl;


	int i=0;
	for(int k=1;k<=n;k++){
		arr[i++]=arr[x++];

	}


	
	arr[u]='\0';
	cout<<arr<<endl;

	

}
int main(){
	char arr[100];
	cin.getline(arr,100);//"hello world"
	int n;
	cin>>n;//1%length(arr)-->1
	n=n%length(arr);

	rotatebyn(arr,n);

	cout<<arr<<endl;



	return 0;
}