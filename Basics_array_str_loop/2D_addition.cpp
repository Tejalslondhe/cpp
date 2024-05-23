
/* concatenation of an array*/

#include<iostream>
using namespace std;
int main()
{
	int i,j,m,n,arr1[10][10],arr2[10][10],arr3[10][10];
	
	cout<<"Enter the dimension";
	cin>>m>>n;
	
	cout<<"Enter an array 1  "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		cin>>arr1[i][j];
		}
	}
	
	cout<<"Array 1 is  "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		cout<<arr1[i][j]<<" ";
		}
		cout<<"\n";
	}
	

	
	
	cout<<"Enter an array 2 "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		cin>>arr2[i][j];
		}
	}
	
	cout<<"Array 2 is  "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		cout<<arr2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"The sum of an array is "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<" "<<arr3[i][j]<<" ";
		}
		cout<<"\n"
	}
	
	
	
}
	
