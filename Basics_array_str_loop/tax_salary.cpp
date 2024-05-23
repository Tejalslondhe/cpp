#include<iostream>
using namespace std;
int main()
{
    int salary;
    cout<<"Enter the basic salary:";
    cin>>salary;
    
    if(salary<150000)
    {
    	cout<<" Tax is "<<salary<<endl;
    }
    else if(150000<=salary<=300000)
    {
    	cout<<" Tax is "<<salary*0.2<<endl;
    }
    else 
    {
    	cout<<" Tax is "<<salary*0.3<<endl;
    }
}
