#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	
	char ch;
	string name;
	cout<<"Enter the file name"<<endl;
	cin>>name;
	
	ifstream input(name);
	if(!input.fail())
	{
		char data[100];
		input>>data;
		cout<<"Data from the file"<<endl;
		cout<<data;
	}
	else
	{
	}
	
}
