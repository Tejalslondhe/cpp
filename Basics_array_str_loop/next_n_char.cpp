#include<iostream>
using namespace std;
int main(){
	
	int limit,i=1;
	char ch;
	
	cout<<"Enter the character:"<<endl;
	cin>>ch;
	
	cout<<"Enter the limit:"<<endl;
	cin>>limit;
	
	while(i<=limit)
	{
		ch = ch+1;
		cout<<ch<<endl;
		i++;
	}	
	
}


