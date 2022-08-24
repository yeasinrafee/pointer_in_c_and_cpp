#include<bits/stdc++.h>
using namespace std;

const int N = 10;

int main(){

	// // Reading Data from File:
	// FILE *fp = fopen("hello.txt", "r");
	// char str[N];
	// // string str;		//Not work;

	// if(fp != NULL){
	// 	while(fgets(str, 10, fp) != NULL){
	// 		cout<<str;
	// 	}
	// 	fclose(fp);
	// }


	// // Creating and writing in a file:
	// FILE *fp = fopen("rafee.txt", "w");
	// char str[N];

	// if(fp){
	// 	fputs("Hello ", fp);

	// 	cout<<"Enter your name: "<<endl;
	// 	cin>>str;
	// 	fputs(str, fp);

	// 	fclose(fp);
	// }

	// Copying in a new file: 
	FILE *fr = fopen("hello.txt", "r");
	FILE *fw = fopen("hello2.txt", "w");
	char str[N];

	if(fr && fw){
		while(fgets(str, N, fr) != NULL){
			fputs(str, fw);
		}
		fclose(fr);
		fclose(fw);
	}

	return 0;
}