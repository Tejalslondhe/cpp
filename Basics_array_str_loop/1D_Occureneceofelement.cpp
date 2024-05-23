/* Occurence of an element in an array*/

#include<iostream>
using namespace std;
int main()
{
	int i,n,arr[10],key,flag=0;
	
	cout<<"Enter size"<<endl;
	cin>>n;
	
	cout<<"Enter the elements of an array:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];		
	}
	
	cout<<"The array is: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;		
	}
	
	cout<<"Enter the element to find "<<endl;
	cin>>key;
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			flag = 0;
			//cout<<"The numbers  "<<arr[i]<<is presnet<<endl;
		}
		else 
		{
			flag =1;
			//cout<<"The number "<<arr[i]<<"is not present"<<endl;
		}		
	}
	
	if(flag==0)
	{
		cout<<"The numbers  "<<key<<" is present"<<endl;
	}
	else
	{
		cout<<"The numbers  "<<key<<" is not present"<<endl;
	}
	
	
}
