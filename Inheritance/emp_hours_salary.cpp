#include<iostream>
using namespace std;
class employee{
	
	private:
		int id;
		string name;
	
	protected: double salary;
	
	public:
		employee()
		{
			id=1;
			name=" Siya";
		}
		
		employee(int id,string name)
		{
			this->id=id;
			this->name=name;			
		}
		
		void accept(int id,string name)
		{
			this->id=id;
			this->name=name;	
		}
		
		
		void display()
		{
			cout<<"ID= "<<id<<"  Name= "<<name<<endl;
		}
		
		void calSalary()
		{
			
		}
	
	
};

class hourly_emp:public employee
{
	private: int no_hr;
		int hr_pay;
	
		
		
	public:
		hourly_emp()
		{
			this->no_hr=0;
			this->hr_pay=0;
			
		}
		
		hourly_emp(int id,string name,int no_hr, int hr_pay)
		:employee(id,name)
		
		{
			cout<<"About hourly based employee"<<endl;
			this->no_hr=no_hr;
			this->hr_pay = hr_pay;
		}
		
		
		void accept(int no_hr, int hr_pay)
		{
			this->no_hr=no_hr;
			this->hr_pay = hr_pay;	
		}
		
		
		
		
		void calSalary()
		{
			cout<<"Hourly employee salary is = "<< no_hr*hr_pay<<endl;
		}
		
		void display()
		{
			employee::display();
			cout<<"Number of hours ="<< no_hr<<"  Pay per hours="<<hr_pay<<endl;
		}
		
		
};

class Salaried_emp:public employee
{
	private: double salary;
	
		
		
	public:
		Salaried_emp()
		{
			salary=0;
			
		}
		
		Salaried_emp(int id,string name,double salary)
		:employee(id,name)
		
		{
			this->salary=salary;
		}
		
		
		void accept(double salary)
		{
			this->salary=salary;	
		}
		
		
		
		void calSalary()
		{
			cout<<"Salaried employee salary is = "<< salary <<endl;
		}
		
		void display()
		{
			employee::display();
			cout<<"Salary: "<<salary<<endl;
		}
		
		
};

int main()
{
	employee emp;
	emp.display();
	
	
	cout<<"\n\nAbout hourly based employee"<<endl;
	hourly_emp he;
	he.accept(8,400);
	he.display();
	he.calSalary();
	
	cout<<"\n\nAbout salary based employee"<<endl;
	Salaried_emp se;
	se.accept(5000);
	se.display();
	se.calSalary();
}
