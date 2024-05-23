#include<iostream>
using namespace std;

int main()
{
	int i,num;
	int flag=0;
	
	for(num=1;num<=50;num++)
	{
		for(i =2;i<num;i++)
		{
			if(num%i==0)     //not prime
		{
			flag++;
			
			break;
			
		}
	}
		
	
	if(flag==0 && num!=1)
	{
		cout<<num<<endl;		
	}
	flag=0;
	
	}
	return 0;
	
}
