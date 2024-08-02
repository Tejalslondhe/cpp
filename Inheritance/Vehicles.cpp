#include<iostream>
using namespace std;
class vehicle{
	
	protected: string name;
		string color;
		int num_wheels;
		
	public:
		vehicle()
		{
			name = "abc";
			color = "yyy";
			num_wheels = 0;
		}
		
		vehicle(string name,string color,int num_wheels)
		{
			this->name=name;
			this->color=color;
			this->num_wheels = num_wheels;	
		}
		
		virtual void display()
		{
			cout<<"Name: "<<name<<"  "<<" Color:"<<color<<" Numbers of wheels:"<<num_wheels<<endl;
			
		}
};

class car:public vehicle{
	
	public: car()
	{
	}
	
	car(string name,string color,int num_wheels):vehicle(name,color,num_wheels)
	{
		this->name=name;
		this->color=color;
		this->num_wheels = num_wheels;	
	}
	
	void lux()
	{
		cout<<"Car provides luxury."<<endl;
	}
	
	void display()
		{
			cout<<"Car:   Name: "<<name<<"  "<<"    Color:"<<color<<"    Numbers of wheels:"<<num_wheels<<endl;
			
		}
};

class motor_cycle:public vehicle{
	
	public: motor_cycle()
	{
	}
	
	motor_cycle(string name,string color,int num_wheels):vehicle(name,color,num_wheels)
	{
		this->name=name;
		this->color=color;
		this->num_wheels = num_wheels;	
	}
	
	void cheap()
	{
		cout<<"Motorcycle is cheapest."<<endl;
	}
	
	void display()
		{
			cout<<"\nMotor_cycle:   Name: "<<name<<"  "<<"    Color:"<<color<<"    Numbers of wheels:"<<num_wheels<<endl;
			
		}
};

class truck:public vehicle{
	
	public: truck()
	{
	}
	
	truck(string name,string color,int num_wheels):vehicle(name,color,num_wheels)
	{
		this->name=name;
		this->color=color;
		this->num_wheels = num_wheels;	
	}
	
	void cheap()
	{
		cout<<"truck is used for transportation."<<endl;
	}
	
	void display()
		{
			cout<<"\ntruck:   Name: "<<name<<"  "<<"    Color:"<<color<<"   Numbers of wheels:"<<num_wheels<<endl;
			
		}
};

int main()
{
//	vehicle v("I10","White",4);
//	v.display();
	
	car c("Swift","Grey",4);
	c.display();
	c.lux();
	
	motor_cycle mtc("Spender","Black",2);
	mtc.display();
	mtc.cheap();
	
	truck t("Mahindra","Red",16);
	t.display();
	t.cheap();	
	

}


