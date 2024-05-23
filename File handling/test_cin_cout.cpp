#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"Enter character:";
	cin.get(a);
	
	cout<<"Character:";
	cout.put('Maya');
	
	char name[10];
	cout<<"Enter name:";
	cin.getline(name,10);
	
	cout<<"Name is"<<name<<endl;
	cout.write(name,5);

	
	
	
}
