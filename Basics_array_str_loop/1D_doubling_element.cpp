#include<iostream>
using namespace std;
int main()
{
	int i,n,arr[10];
	
	cout<<"size of an array";
	cin>>n;
	
	cout<<"Enter an array  "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"An array is  "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	cout<<"Double of an array is  "<<endl;
	for(i=0;i<n;i++)
	{
		cout<< 2*arr[i]<<endl;
	}
	
	
}
