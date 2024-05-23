#include<iostream>
using namespace std;
int main()
{
	int ch;
	
	cout<<"1.Select pizza"<<endl;
	cout<<"2.Select burger"<<endl;
	cout<<"3.Select french fries"<<endl;
	
	cout<<"\nEnter the choice:"<<endl;
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			{
				cout<<"Thank you for selecting PIZZA."<<endl;
				cout<<"The price of pizza is RS.200"<<endl;
			}
			
			break;
			
		case 2:
			{
				cout<<"Thank you for selecting BURGER."<<endl;
				cout<<"The price of burger is RS.150"<<endl;
			}
			
			break;
			
		case 3:
			{
				cout<<"Thank you for selecting FRENCH FRIES."<<endl;
				cout<<"The price of french fries is RS.100"<<endl;
			}
			
			
	}
}
