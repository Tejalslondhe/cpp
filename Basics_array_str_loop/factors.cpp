#include<iostream>
using namespace std;
int main() {
    int num, i;
    cout<<"Enter a positive integer: "<<endl;
    cin>>num;
    cout<<"Factors of" <<num <<"are: "<<endl;
    for (i = 1; i <= num; ++i)
	{
        if (num % i == 0) 
		{
            cout<< i<<endl;
        }
    }
    return 0;
}

