#include<iostream>
using namespace std;
int main()
{
	int n,base;
	int power = 1;
	
	cout<<"Enter base:"<<endl;
	cin>>base;
	cout<<"Enter n:"<<endl;
	cin>>n;
	
	cout << base << "^" <<n<< " = ";
	while(n!=0)
	{
		power = power*base;
		--n;
	}
	
	cout<<power<<endl;
}
