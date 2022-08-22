#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	char str[6] = "Rafee";
	// for(int i = 0; i < 5; i++){
	// 	cout<<*(str+i);
	// }

 	// char *ptr = str;
 	// cout<<*(ptr+3);
 	// *(ptr+3) = 'i';
 	// cout<<str;

 	// while(*ptr != '\0'){
 	// 	cout<<*ptr;
 	// 	ptr++;
 	// }

 	// *(ptr+3) = "i";

 	// printf("%s", str);

	int i = 0;
 // 	while(str[i]){
 // 		printf("%s\n", str+i);
 // 		i++;
 // 	}


// Array of pointer to string:
	char *subject[5] = {"Bangla", "English", "Maths", "CSC", "Arabic"};

	while(subject[i]){
		printf("%s\n", subject[i]);
		i++;
	}
	return 0;
}