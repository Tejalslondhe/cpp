#include<iostream>
#define pi 3.142
using namespace std;
int main()
{
	int ch,i,r,area,length,breadth, base,ht;
	
	cout<<"1. Compute area of circle"<<endl;
	cout<<"2. Compute area of rectangle"<<endl;
	cout<<"3. Compute area of triangle"<<endl;
	cout<<"4. Exit"<<endl;
		
	
	do
	{
		cout<<"\nEnter the choise"<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"Enter the radius:"<<endl;
				cin>>r;
				cout<<"Area of the circle is "<<pi*pi*r<<endl;
				break;
				
			case 2:
				cout<<"Enter the length:"<<endl;
				cin>>length;
				cout<<"Enter the breadth:"<<endl;
				cin>>breadth;
				cout<<"\n Area of the rectangle is "<<length*breadth<<endl;
				break;
				
			case 3:
				cout<<"Enter the base:"<<endl;
				cin>>base;
				cout<<"Enter the height:"<<endl;
				cin>>ht;
				cout<<"\n Area of the triangle is "<<0.5*base*ht<<endl;
				break;
				
		}
		
	}
	while(ch<4);
		return 0;
}
	

