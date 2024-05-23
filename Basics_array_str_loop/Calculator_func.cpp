/* add,sub,multi,div using function*/

#include<iostream>
using namespace std;
void add(int a,int b)   //function defination for addition
{
	int c;
	c=a+b;
	cout<<"Addition is:"<<c<<endl;
}

void sub(int a,int b)
{
	int c;
	c = a-b;
	cout<<"Subtraction is:"<<c<<endl;
}

void mult(int a,int b)
{
	int c;
	c=a*b;
	cout<<"Multiplication is:"<<c<<endl;
}

void divs(int a,int b)
{
	int c;
	c=a/b;
	cout<<"Division is:"<<c<<endl;
}

int main()

{

	int a,b;
	cout<<"Enter 2 numbers:";
	cin>>a>>b;
	
	add(a,b); //function call
	sub(a,b);
	mult(a,b);
	divs(a,b);
	
}

