#include<iostream>
using namespace std;
int i,n;
int total(int arr[])
{
	int sum=0;
	for(int i=0;i<n;i++){
	//cout<<"\n"<<arr[i];
	sum=sum+arr[i];
	}
	//cout<<"sum of array is:"<<sum<<endl;
	return sum;
}
int main()
{

	cout<<"enter size:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter element:"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	
	}
	
	
int s1=	total(arr);
	cout<<"\n sum of array element is:"<<s1;
	
	
}

