#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character:";
    cin>>ch;
    
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
    	cout<<ch<<" is a vowel "<<endl;
    }
    
    else 
    {
    	cout<<ch<<" is a consonant "<<endl;
    }
}
