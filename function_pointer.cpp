#include<bits/stdc++.h>
using namespace std;

typedef int (*FP)(int, int);
const int N = 0;

void hello(){
	cout<<"Hello world"<<endl;
}

int sum(int a, int b){
	return a+b;
}

int main(){

	// void (*fptr)();
	// fptr = hello;
	// (*fptr)();	


	int ans;
	FP fptr = sum;
	ans = (*fptr)(64, 56);
	cout<<ans<<endl;

	return 0;
}