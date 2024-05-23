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
		   
		   Box operator+(const Box &box)
	    {
	    //get l,b,h of box1 using this->
		//get l,b,h of box2 using i/p argname   obj
		  int l1=this->l+box.l;
		  int b1=this->b+box.b;
		  int h1=this->h+box.h;
		  
		  
		  Box newObj(l1,b1,h1);
		  return newObj; 
	}
         
};

int main(){
Box obj(11,12,5);
obj.show();

Box obj2(5,10,5);
obj2.show();

Box obj3;
obj3=obj+obj2;
obj3.show();


}		  
