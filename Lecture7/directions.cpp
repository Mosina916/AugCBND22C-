#include<iostream>
using namespace std;
int main(){
	int x=0,y=0;//at origin 

	char ch;
	// cin>>ch;//'S'
	ch=cin.get();
	while(ch!='\n'){
		if(ch=='E'){
		x++;
	}
	else if(ch=='W'){
		x--;//2 -2
	}
	else if(ch=='N'){
		y++;//
	}
	else if(ch=='S'){
		y--;//

	}
	// cin>>ch;//S
	ch=cin.get();

	}

	cout<<x<<" "<<y<<endl;

	if(x>=0 and y>=0){
		// ist quadrant
		for(int i=0;i<x;i++){
			cout<<'E';
		}
		for(int j=0;j<y;j++){
			cout<<'N';
		}
	}
	else if(x<=0 and y>=0){
		// 2nd quadrant
		for(int j=0;j<y;j++){
			cout<<'N';
		}

		for(int i=0;i<abs(x);i++){
			cout<<'W';
		}


	}
	else if(x<=0 and y<=0){
		// 3rd quadrant
		for(int j=0;j<abs(y);j++){
			cout<<'S';
		}
		for(int i=0;i<abs(x);i++){
			cout<<'W';
		}
	}
	else{
		// 4th quadrant
		for(int i=0;i<x;i++){
			cout<<'E';
		}
		for(int j=0;j<abs(y);j++){
			cout<<'S';
		}

	}

	cout<<endl;


	

	return 0;
}