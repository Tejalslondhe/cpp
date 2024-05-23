#include<iostream>
using namespace std;

int main()
{
	int num,i;   //declare num
	int flag;
	cout<<"Enter the number:"<<endl;
	cin>>num;
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
		}
		
		
    }
	
	
	if(flag==1)
	{
		cout<<"The given number "<<num<<" is not prime.";
		
	}
	else
	{
		cout<<"The given number "<<num<<" is prime."<<endl;
	}
    
	return 0;
	
}
