#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter the integer:";
    cin>>i;
    
    if(i%5==0 && i%7==0)
    {
    	cout<<i<<" is divisible by 5 and 7."<<endl;
    }
    else
    {
    	cout<<i<<" is not divisible by 5 and 7."<<endl;
    }
}
