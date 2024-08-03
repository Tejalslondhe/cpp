#include <iostream>
using namespace std;
template <class T>

class date{
	
	private:
		T d,m,y,temp;
		
		public:
		date()
		{
			d=m=y=1;
		
		}
		
		date(T d,T m,T y)
		{
			this->d=d;
			this->m=m;
			this->y=y;		
		}
		
		void Display(T d,T m,T y)
		{
			cout<<"date:"<<d<<"/"<<m<<"/"<<y<<endl;
		}
		
		T swap_value(T &a,T &b)
		{
		temp=a;
		a=b;
		b=temp;	
			
		}	
		
};

int main()
{
	date<int> obj;
	obj.Display(2,5,2000);
	date<int> obj1;
	obj1.Display(5,10,1990);
	
	
	
}


