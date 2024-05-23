/* Sum of all array elements*/

#include<iostream>
using namespace std;
int main()
{
	int i,n,arr[10],sum;
	
	cout<<"Enter the size of an array: "<<endl;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"The elements of array are:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	sum = 0;
	for(i=0;i<n;i++)
	{
	sum = sum+arr[i];
	}
	cout<<"The sum of elements of an array is:"<<sum;
}
