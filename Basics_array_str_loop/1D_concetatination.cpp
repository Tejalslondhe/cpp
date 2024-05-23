/* concatenation of an array*/

#include<iostream>
using namespace std;
int main()
{
	int i,arr1[3],arr2[4],arr3[6];
	
	cout<<"Enter an array 1 of size 3  "<<endl;
	for(i=0;i<3;i++)
	{
		cin>>arr1[i];
	}
	

	
	
	cout<<"Enter an array 2 of size 4 "<<endl;
	for(i=0;i<4;i++)
	{
		cin>>arr2[i];
	}
	
	
	
	
	cout<<"Concatenation of an array is:";
	
	for(i=0;i<4;i++)
	{
		arr3[i]=arr1[i];
		arr3[i+4]=arr2[i];
	}
	for(i=0;i<7;i++)
	{
		cout<<arr3[i]<<endl;
	}
}


