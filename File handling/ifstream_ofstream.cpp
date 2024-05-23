#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	
	char ch;
	string name;
	cout<<"Enter the file name"<<endl;
	cin>>name;
	
	ofstream fout;
	fout.open(name);
	if(fout.fail())
	{
		cout<<"Error"<<endl;
	}
	else
	{
	
	fout<<"A-Z alphabetes:"<<endl;
		
	for(ch=65;ch<=90;ch++)
	{
		fout<<char(ch)<<endl;	
	}
}
	
}
