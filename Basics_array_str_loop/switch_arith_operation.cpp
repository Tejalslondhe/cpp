#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	char operation;
	
	
	cout<<"Choose the operartion(+,-,*,/):"<<endl;
	cin>>operation;
	
	cout<<"Enter the 2 numbers:\n"<<endl;
	cin>>num1>>num2;
	
	
	
	switch(operation)
	{
		case '+':
			cout<<"Addition of is"<<num1+num2<<endl;
			break;
			
		case '-':
			cout<<"Subtraction of is"<<num1-num2<<endl;
			break;
			
		case '*':
			cout<<"Multiplication of is"<<num1*num2<<endl;
			break;
			
		case '/':
			cout<<"Division of is"<<num1/num2<<endl;
			break;
		
		default:
			cout<<"Invalid case"<<endl;
			
	}
	return 0;
}
