#include<bits/stdc++.h>
using namespace std;

typedef int (*FP)(int, int);
const int N = 0;

int sum(int x, int y) {return x+y;}
int mod(int x, int y) {return x%y;}

int execute(int x, int y, FP fp){
	int result = (*fp)(x, y);
	return result;
}

int main(){
	cout<<execute(45, 25, sum)<<endl;
	cout<<execute(200, 10, mod)<<endl;

	return 0;
}