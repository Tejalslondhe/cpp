#include<iostream>
using namespace std;
int main()
{
	int ch;
	string name;
	int price;
	
	cout<<"1.Select pizza"<<endl;
	cout<<"2.Display amount"<<endl;
	
	
	
	cout<<"\nEnter the choice:";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			cout<<"1.Enter the pizza name:";
			cin>>name;
			
			
		case 2:
			cout<<"Price= "<<endl;
			cin>>price;
			break;
			
		case 3:
			cout<<"Invalid choise"<<endl;
			break;
	
	
	}
	
	
	
}
