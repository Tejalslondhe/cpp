/* Display even, odd number from an array*/

#include<iostream>
using namespace std;
int main()
{
	int i,n,arr[10],flag=0;
	
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
	
	cout<<"The even numbers are"<<endl;
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			cout<<arr[i]<<endl;
		}
	}
	
	cout<<"The odd numbers are"<<endl;
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			cout<<arr[i]<<endl;
		}
	}
			
}
