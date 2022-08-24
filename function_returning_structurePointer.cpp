#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

const int N = 0;

struct employee{
	char name[6];
	int age;
	float weight;
};

struct employee* getdetails();

int main(){
	struct employee *e = getdetails();
	cout<<e->name<<endl;
	cout<<e->age<<endl;
	cout<<e->weight<<endl;
	free(e);

	return 0;
}

struct employee* getdetails(){
	struct employee *ptr = malloc(sizeof(struct employee));

	cout<<"Give the Employee details: "<<endl;
	cin>>ptr->name>>ptr->age>>ptr->weight;

	return ptr;
}