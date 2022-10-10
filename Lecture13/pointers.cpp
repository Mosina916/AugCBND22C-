#include<iostream>
using namespace std;
int main(){
	// int a=90;
	// float f=80.54;
	// bool israining=true;
	// double d=524.313;
	// cout<<a<<endl;
	// cout<<f<<endl;
	// cout<<israiniong<<endl;
	// cout<<d<<endl;


	// size 

	// cout<<sizeof(a)<<endl;
	// cout<<sizeof(f)<<endl;
	// cout<<sizeof(israining)<<endl;
	// cout<<sizeof(d)<<endl;

	// int x=50;
	// float h=30.98;
	// double d=22.24;
	// bool b=true;


	// // cout<<&x<<endl;
	// // cout<<&h<<endl;
	// // cout<<&d<<endl;

	// int* xptr=&x;
	// float* fptr=&h;
	// double* dptr=&d;

	// bool* bptr=&b;

	// cout<<sizeof(&x)<<endl;
	// cout<<sizeof(&h)<<endl;
	// cout<<sizeof(&d)<<endl;
	// cout<<sizeof(&b)<<endl;


	// &x is same as xptr

	// cout<<&x<<endl;

	// cout<<xptr<<endl;

	// int*xptr=&x;
	// int	*xptr=&x;


	// char

	// char ch='R';
	// cout<<ch<<endl;//R
	// cout<<sizeof(ch)<<endl;//1 byte
	// char *cptr=&ch;
	// cout<<&ch<<endl;//0x
	// cout<<cptr<<endl;//ox

	// fooling of compiler
	// cout<<(int*)&ch<<endl;
	// cout<<(float*)&ch<<endl;
	// cout<<(bool*)&ch<<endl;
	// cout<<(double*)&ch<<endl;

	// cout<<(void*)&ch<<endl;
	// cout<<sizeof(cptr)<<endl;//8

	// int x=50;
	// float h=30.98;
	// double d=22.24;
	// bool b=true;

	// int* xptr=&x;
	// float* fptr=&h;
	// double* dptr=&d;

	// bool* bptr=&b;

	// *xptr is same as x

	// cout<<*xptr<<endl;

	// on adding 1 to  pointer
	// cout<<xptr<<endl;
	// cout<<xptr+1<<endl;
	// cout<<xptr+2<<endl;
	// cout<<xptr+3<<endl;

	// cout<<dptr<<endl;
	// cout<<dptr+1<<endl;
	// cout<<dptr+2<<endl;
	// cout<<dptr+3<<endl;


	// char ch='y';
	// char*cptr=&ch;
	// cout<<(void*)cptr<<endl;

	// cout<<(void *) (cptr+1)<<endl;
	// cout<<(void*)(cptr+2)<<endl;


	// int *xptr;
	// int *ghtr;
	// int *pptr;
	// int *xptr,*gcout<<(void*)cptr<<endl;htr,*pptr;

	// int* pptr,gptr;

	// gptr=&x;

	int x=90;
	int*xptr=&x;

	// cout<<xptr<<endl;
	int**pptr=&xptr;

	// cout<<pptr<<endl;

	int***tptr=&pptr;

	// cout<<tptr<<endl;


	cout<<(*(*(*tptr)))<<endl;//*pptr-->xptr


	cout<<*(&x)<<endl;
















	return 0;
}