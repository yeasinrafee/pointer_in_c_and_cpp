#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int sett(int a, int *b){
	a = 90;
	*b = 30;

}

int* getAddress(){
	int i = 90;
	return &i;
}
int main(){
	int a = 10, b = 20;
	// cout<<"a = "<<a<<" b = "<<b<<endl;
	cout<<"After: "<<endl;
	sett(a, &b);
	// cout<<"a = "<<a<<" b = "<<b;

	int *ptr = getAddress();
	cout<<"Address: "<<ptr<<endl;
	cout<<"Value: "<<*ptr<<endl;

	return 0;
}