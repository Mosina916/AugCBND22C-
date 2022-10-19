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

bool permuation(char *arr1,char *arr2){
	if(length(arr1)!=length(arr2)){
		return false;
	}
	else{
		// agar length same hai kya characters same hai ya nahi
		int count1[26]={0};

		
		// abzac\0

		for(int i=0;i<=length(arr1)-1;i++){
			char ch=arr1[i];//a
			int index=ch-'a';//122-97 -->25
			count1[index]++;

		}

		// // 2nd arr
		int count2[26]={0};

		
		// abzac\0

		for(int i=0;i<=length(arr2)-1;i++){
			char ch=arr2[i];//a
			int index=ch-'a';//122-97 -->25
			count2[index]++;

		}


		for(int k=0;k<=25;k++){
			if(count1[k]!=count2[k]){
				return false;
			}
		}
		

		return true;

	}
}

int main(){
	char arr1[100];
	cin.getline(arr1,100);//abmmdzacbb abzac 
	char arr2[100];
	cin.getline(arr2,100);//mbaazdmcb  zabca

	if(permuation(arr1,arr2)==true){
		cout<<"permuation"<<endl;
	}
	else{
		cout<<"not permuation"<<endl;
	}
	




	return 0;
}