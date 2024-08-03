#include<iostream>
using namespace std;
class Mystack{
	int *arr;
	int top;
	int n=5;
	int cnt=n;//5
	public: Mystack()
	{
		arr=new int[n];
		top = -1;
	}
	
	void push(int no){
		if (top<5)
		arr[++top]=no;
		else
		throw "stack is full";
	}
	
	void pop()
{
	 
	if(top>=0)
	{
		//cout<<"top:"<<top;
		cnt=--top;
		// arr[--top];
		//cout<<"\ncount:"<<cnt;
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
	Mystack obj;
	obj.push(5);
	obj.push(9);
	obj.push(2);
	obj.push(3);
	obj.push(2);

	obj.display();
	
	cout<<"After removing elements"<<endl;
	obj.pop();
	obj.pop();
	obj.display();
}

