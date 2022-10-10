
#include<iostream>
using namespace std;

void multiply(int arr[1000],int notomultiply,int &noofplacestoiterate){

	int carry=0;
	for(int k=0;k<noofplacestoiterate; k++){
		int product=notomultiply*arr[k]+carry;//12
	arr[k]=product%10;//0
	carry=product/10;//1

	}

	// while(carry>0){
	if(carry>0){

		arr[noofplacestoiterate]=carry%10;
		carry=carry/10;//0
	noofplacestoiterate++;
	}
	

	// }
	

	


}

void fact(int n){
	int arr[1000];
	int noofplacestoiterate=1;
	arr[0]=1;
	for(int i=1;i<=n;i++){
		multiply(arr,i,noofplacestoiterate);

	}

	for(int j=noofplacestoiterate-1;j>=0;j--){
		cout<<arr[j];
	}
	cout<<endl;
	
	
}
int main(){
	int n;
	cin>>n;
	fact(n);


	return 0;
}