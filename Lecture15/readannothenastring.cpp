#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	// cin.ignore();//ignores 1 character
	cin.get();
	// cin.ignore();
	// cin.ignore();
	char arr[1000];
	cin.getline(arr,1000);

	// int n;
	// cin>>n;

	cout<<n<<" ";
	cout<<arr<<endl;
	

	return 0;
}