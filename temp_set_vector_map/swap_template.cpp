#include <iostream>
using namespace std;
template <class T>
void swap_value(T &a,T &b)
{
T temp=a;
a=b;
b=temp;	
	
}
int main()
{
	int a=10;
	int b=20;
	swap_value(a,b);
	cout<<"a= "<<a<<" b= "<<b<<endl;
	
	double d1=2.3;
	double d2=5.6;
	swap_value(d1,d2);
	cout<<"d1= "<<d1<<" d2= "<<d2<<endl;
	
	string s1="ram";
	string s2="sham";
	swap_value(s1,s2);
	cout<<"s1= "<<s1<<" s2= "<<s2<<endl;
}
