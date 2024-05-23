#include<iostream>
using namespace std;

int main()
{
	int a=1,b,i,num;
	int flag=0;
	
	cout<<"Enter the range n:"<<endl;

	cin>>b;
	
	for(num=a;num<=b;num++)
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
		cout<<num<<"  ";		
	}
	flag=0;
	
	}
	return 0;
	
}
