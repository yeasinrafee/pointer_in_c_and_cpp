
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

const int N = 0;

int main(){
	
	int *ptr;
	ptr = (int*)calloc(5, sizeof(int));
	*(ptr+0) = 56;
	*(ptr+3) = 23;
	free(ptr);

	cout<<*(ptr+0)<<" "<<*(ptr+3)<<endl;
 	return 0;
}