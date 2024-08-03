/* Q2.Write a Program to sort the Array , First half in Ascending order and
the Second in Descending order.*/

#include<iostream>
using namespace std;
int main()
{
	int i,j,n,arr[50],temp;
	
	cout<<"Enter the size:";
	cin>>n;
	
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	

	
	for(i=0;i<n/2;++i)
	{
		for(j=i+1;j<n/2;++j)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;			
				
			}
			
		}
		
	}
	
	for(i=0;i<n/2;++i)
	{
		cout<<arr[i]<<"  ";
	}
	
	
	for(i=n/2;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(arr[i]<arr[j])
			{
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;			
				
			}
			
		}
		
	}
	
	for(i=n/2;i<n;++i)
	{
		cout<<arr[i]<<"  ";
	}
	
	
	
		
}

	

