/*1:Write a program to create an array of integers and perform following operations on that array like 
finding the sum, average, maximum and minimum number in that array. Accept the numbers of the 
array from user. */

#include<iostream>
using namespace std;
int main()
{
	int arr[20],i,n,sum=0;
	
	cout<<"Enter the size of an array:"<<endl;
	cin>>n;
	
	cout<<"Enter the elements od an array"<<endl;
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	
	cout<<"\nAn array is:\n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
	
	
	
	for(i=0;i<n;i++)
	{
		
		sum = sum + arr[i];
	}
	cout<<"\nSum of an array is:"<<sum<<endl;
	
	for(i=0;i<n;i++)
	{
		if(arr[0]>=arr[i])
		{
			arr[0]=arr[i];
		}
	}
	cout << endl << "\nSmallest element = " << arr[0];
	
	for(i=0;i<n;i++)
	{
		if(arr[0]<=arr[i])
		{
			arr[0]=arr[i];
		}
	}
	cout << endl << "\nLargest element = " << arr[0];
	
	cout<<"\nAverage of an element of an array is "<<float(sum)/n<<endl;
		
	
	
	
	
}


