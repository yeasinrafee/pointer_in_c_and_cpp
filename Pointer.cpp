#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	// int a = 5;
	// cout<<&a+1<<endl;

	int a = 10;
	int *ptr = &a;
	int **dptr = &ptr;

	cout<<"value of a is: "<<a<<endl;
	cout<<"value of a is: "<<*ptr<<endl;
	cout<<"address of a is: "<<&a<<endl;
	cout<<"address of a is: "<<ptr<<endl;
	cout<<"address of ptr is: "<<&ptr<<endl;
	cout<<"address of ptr is: "<<dptr<<endl;
	cout<<"address of a is: "<<*dptr<<endl;
	cout<<"value of a is: "<<**dptr<<endl;
	return 0;
}