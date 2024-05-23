#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int sum = 0;
	
	cout<<"Enter n:"<<endl;
	cin>>n;
	
	for(i=1;i<n;i++)
	{
		sum = sum+i;
	}
	
	cout<<"The sum of "<< n <<" numbers is "<<sum<<endl;
}
