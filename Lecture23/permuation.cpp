#include <iostream>
using namespace std;
int coun=0;
void permuation(char inp[100],int i){
	// base case
	if(inp[i]=='\0'){
		cout<<inp<<endl;//"abc"
		return;
	}

	// ?rec case
	for(int j=i;inp[j]!='\0';j++){
		swap(inp[i],inp[j]);
		permuation(inp,i+1);
		swap(inp[i],inp[j]);//backtracking
	}
	
}
int main(){
	char inp[100];
	
	cin>>inp;

	permuation(inp,0);

	



	return 0;
}