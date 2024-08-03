#include<iostream>

using namespace std;
	enum fueltype {Petrol,Diesel,CNG};
class car{
	
	private: int carID;
		string name;
		enum fueltype {Petrol,Diesel,CNG};
		
		
	
	
	public:
	car()
	{
//		carID = 0;
//		name = "nano";
//		fueltype = xyz;
	}
	
	car(int carID,string name,int fueltype)
	{
		this->carID=carID;
		this->name=name;
		this->fueltype=fueltype;
	}
	
	void display()
	{
		cout<<"Car ID = "<<CarID<<" Name= "<<name<<" Fuel Type= "<<fueltype<<endl;
	}
	
};

int main()
{	
	fueltype f=fueltype::Petrol;
	if(f=fueltype :: Petrol)
	{
		std::cout<<"Your car's fuel type is Petrol"<<std::end;
	}
	else if(f=fueltype :: Diesel)
	{
		std::cout<<"Your car's fuel type is Diesel"<<std::end;
	}
	if(f=fueltype :: CNG)
	{
		std::cout<<"Your car's fuel type is CNG"<<std::end;
	}
	
	car c(10,"suv",0);
	c.display();
}


