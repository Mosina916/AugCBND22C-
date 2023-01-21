#include <iostream>
using namespace std;
int coun=0;
void subsequences(char inp[100],char out[100],int i,int j){
	// base case
	if(inp[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;//abc ab
		coun++;
		return;
	}
	// rec case
	// with a 
	out[j]=inp[i];
	subsequences(inp,out,i+1,j+1);
	// without a 
	subsequences(inp,out,i+1,j);
}
int main(){
	char inp[100];
	



	return 0;
}