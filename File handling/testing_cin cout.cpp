#include<iostream>
using namespace std;
int main()
{
//	char a;
//	cout<<"Enter character:";
//	cin.get(a);
//	
//	cout<<"Character:";
//	cout.put('Maya');
	
	char name[10];
	cout<<"Enter name:";
	cin.get(name,10);
	
	cout<<name<<endl;
	cout.write(name,5);
	
	int no=100;
	cout<<no<<endl;
	cout<<"-----using width------"<<endl;
	//Adjusting the width of the next value to displayed to 10 columns.
	cout.width(15);
 	cout<<no;
 	
	 
	 //fill demo
 	char ch='O';
 	cout<<endl;
 	cout.fill('*');
 	cout.width(10);
 	cout<<ch<<endl;
 	
	
	

	
	
	
}
