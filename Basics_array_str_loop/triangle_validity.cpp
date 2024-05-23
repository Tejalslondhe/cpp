#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the three sides of the triangle:";
    cin>>a>>b>>c;
    
    if(a+b+c==180)
    {
    	cout<<"The given triangle is valid"<<endl;
    }
    else
    {
    	cout<<"The given triangle is not valid"<<endl;
    }
}
