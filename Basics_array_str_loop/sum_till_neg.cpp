#include<iostream>
using namespace std;
int main()
{
    int num,sum;
    cout<<"Enter the numbers(To stop enter negative number):\n"<<endl;
    cin>>num;
    sum = 0;
    while (num>=0)
    {
        sum = sum +num;
        cin>>num;
    }
    cout<<"The sum is"<<sum;
}

