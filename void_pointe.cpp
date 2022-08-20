#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	int i = 3;
	char c = 'A';

	void *iptr, *cptr;
	iptr = &i;
	cptr = &c;

	cout<<*(int*)iptr<<" "<<*(char*)cptr<<endl;	

	return 0;
}