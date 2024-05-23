#include<iostream>
using namespace std;
class Mystack{
	int *arr;
	int top;
	int n;
	int cnt=n;
	
	
	public: 
	
	
	
	Mystack()
	{
		arr=new int[n];
		top = -1;
	}
	
	void push(int no){
		
		
		if (top<n)
		arr[++top]=no;
		else
		throw "stack is full";
	}
	
	void pop()
{
	 
	if(top>=0)
	{
		
		cnt=--top;
		
	}
	
	else
	throw "Stack is empty";
	
}

void display()
{
	for(top=0;top<cnt;top++)
	{
		cout<<"\n"<<arr[top]<<endl;
	}
	
}
};

int main()
{
	int n;
	
	
	
	Mystack obj;
	obj.push(5);
	obj.push(9);
	obj.push(2);
	obj.push(3);
	obj.push(8);
	obj.push(11);

	obj.display();
	
	cout<<"After removing elements"<<endl;
	obj.pop();
	obj.pop();
	obj.display();
}

