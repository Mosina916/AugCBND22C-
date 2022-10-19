#include <iostream>
using  namespace std;


int main(){


	// datatype nameofarray[rows][cols];
	// int arr[3][3]={
	// 	{3,2,1},
	// 	{6,1,4},
	// 	{9,13,14}
	// };


	// to  print or access
	// arrayname[rowno][colno]
	// 1st row
	// cout<<arr[0][0]<<" ";
	// cout<<arr[0][1]<<" ";
	// cout<<arr[0][2]<<" ";
	// cout<<endl;

	// for(int j=0;j<=2;j++){
	// 	cout<<arr[0][j]<<" ";
	// }
	// cout<<endl;

	// 2nd row
	// cout<<arr[1][0]<<" ";
	// cout<<arr[1][1]<<" ";
	// cout<<arr[1][2]<<" ";
	// cout<<endl;

	// for(int j=0;j<=2;j++){
	// 	cout<<arr[1][j]<<" ";
	// }
	// cout<<endl;


	// 3rd row
	// cout<<arr[2][0]<<" ";
	// cout<<arr[2][1]<<" ";
	// cout<<arr[2][2]<<" ";

	// for (int j = 0; j <=2; j++)
	// {
	// 	cout<<arr[2][j]<<" ";
		
	// }
	// cout<<endl;

	// int arr[100][100];
	// int rows,cols;
	// cin>>rows>>cols;//3 3

	// int arr[rows][cols];


	// for(int i=0;i<=rows-1;i++){
	// 	for(int j=0;j<=cols-1;j++){
	// 	cin>>arr[i][j];

	// }

	// }

	// for(int i=0;i<=rows-1;i++){

	// 	for (int j = 0; j <=cols-1; j++)
	// {
	// 	cout<<arr[i][j]<<" ";
		
	// }
	// cout<<endl;


	// }

// 	int arr[][3]={
// 		{3,2,1},
// 		{6,1,4},
// 		{9,13,14}
// 	};

// 	for(int i=0;i<=2;i++){

// 		for (int j = 0; j <=2; j++)
// 	{
// 		cout<<arr[i][j]<<" ";
		
// 	}
// 	cout<<endl;
// }

// 	cout<<arr<<endl;

// cout<<&arr[0][0]<<endl;


// cout<<&arr[0]<<endl;


// cout<<&arr[1][0]<<endl;

// cout<<&arr[1]<<endl;


// cout<<&arr[2][0]<<endl;

// cout<<&arr[2]<<endl;


// cout<<&arr[0][0]<<endl;

// cout<<&arr[1][0]<<endl;
// cout<<&arr[2][0]<<endl;





	
	






	// for(int i=0;i<=2;i++){

	// 	for (int j = 0; j <=2; j++)
	// {
	// 	cout<<arr[i][j]<<" ";
		
	// }
	// cout<<endl;


	// }


	// 	char arr[3][4]={
	// 	{'A','B','C','\0'},
	// 	{'R','A','T','\0'},
	// 	{'B','A','T','\0'}
	// };

	char arr[3][4]={
		"ABC",
		"RAT",
		"BAT"
	};


// 	for(int i=0;i<=2;i++){

// 		for (int j = 0; j <=2; j++)
// 	{
// 		cout<<arr[i][j]<<" ";
		
// 	}
// 	cout<<endl;
// }

// cout<<&arr[0][0]<<endl;
// cout<<&arr[1][0]<<endl;
// cout<<&arr[2][0]<<endl;

	for (int i = 0; i <=2 ; ++i)
	{
		cout<<&arr[i][0]<<" "<<endl;
	}


	// cout<<(void*)&arr[0][0]<<endl;
	// cout<<(void*)&arr[0][1]<<endl;
	// cout<<&arr[1][0]<<endl;
	// cout<<&arr[2][0]<<endl;

	// cout<<&arr[0]<<endl;
	// cout<<&arr[1]<<endl;
	// cout<<&arr[2]<<endl;






	
	




	return 0;
}