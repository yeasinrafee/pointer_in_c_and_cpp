#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	int arr[5] = {32, 23, 56, 54, 34};
	int *ptr;

	ptr = arr;

	*(ptr + 3) = *(ptr + 0);

	for(int i = 0; i < 5; i++){
		cout<<*(ptr+i)<<" "<<endl;
	}	

	return 0;
}