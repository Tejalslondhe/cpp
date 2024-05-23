#include<iostream>
using namespace std;
class rectangle
{

private:int len,brd;

public:void area(int length,int breadth)
{
	len=length;
	brd=breadth;
}
	int area()
	{
	return len*brd;
	
 }

};
int main()
{
	rectangle obj;
	obj.area(10,20);
	cout<<"area is:"<<obj.area()<<endl;
}
