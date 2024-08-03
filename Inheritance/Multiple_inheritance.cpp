#include<iostream>
using namespace std;

class A{
	public:void show()
	{
		cout<<"-----A --show-----"<<endl;
	}
};
class B{
	public:void show()
	{
		cout<<"-----B --show-----"<<endl;
	}
};

class C:public B,public A{
	
		
		public :void show()
		 { 
		 B::show();
		 
		 }
	 
		 
};

int main()
{
	
	C cObj;//constr A---->const B----->constr C
	
	//cObj.A::show();
	
	cObj.show();//
	return 0;
	
	
}


