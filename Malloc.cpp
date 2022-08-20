#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

const int N = 0;

int main(){
		int *ptr;

		ptr =(int*) malloc(5 * sizeof(int));

		*(ptr+0) = 10;
		*(ptr+1) = 20;
		*(ptr+2) = 30;
		*(ptr+3) = 40;
		*(ptr+4) = 50;

		cout<<*(ptr+3)<<endl;

		if(ptr != NULL)
			cout<<"Memory is allocated"<<endl;

	return 0;
}