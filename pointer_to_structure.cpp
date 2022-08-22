#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	struct employee
		{
			char name[6];
			int age;
			float weight;
		};	
	struct employee e = {"Rafee", 21, 5.9};
	struct employee *ptr = &e;
	cout<<ptr->name<<endl;
	cout<<ptr->age<<endl;
	cout<<ptr->weight<<endl;
	return 0;
}