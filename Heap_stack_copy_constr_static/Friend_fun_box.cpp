#include<iostream>
using namespace std;

class Box{
	
	private:int l,b,h;
	public:Box(){
		l=b=h=10;
	       }
	       Box(int l,int b,int h)
	       {
	       	this->l=l;
	       	this->b=b;
	       	this->h=h;
	       	
		   }
		   void show(){
		   	cout<<"  Length="<<l<<endl;
		   	cout<<"  Breadth="<<b<<endl;
		   	cout<<"  Height="<<h<<endl;
		   	
		   }  
         friend void ChangeDimensions(Box &obj);
};

void ChangeDimensions(Box &obj){
	//
	//obj.l=90;private data member are not accessible outside 
	//how to access private data member outside class?

obj.l=90;
obj.b=100;
obj.h=230;

obj.show();
}		   
		   
int main()
{
	
	Box boxObj(20,40,50);
	boxObj.show();
	
	ChangeDimensions(boxObj);

	cout<<"----Dimensions changed------"<<endl;
	
	Box boxObj2(100,100,100);
	boxObj2.show();
	
}
