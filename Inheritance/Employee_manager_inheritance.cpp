#include<iostream>
using namespace std;
class employee{
	
	private:
		int id;
		string name;
	
	protected: int salary;
	
	public:
		employee()
		{
			id=1;
			name=" Siya";
			salary= 60000;
		}
		
		employee(int id,string name,int salary)
		{
			this->id=id;
			this->name=name;
			this->salary=salary;			
		}
		
		void accept(int id,string name,int salary)
		{
			this->id=id;
			this->name=name;
			this->salary=salary;	
		}
		
		
		void display()
		{
			cout<<"ID= "<<id<<"  Name= "<<name<<"  salary = "<<salary<<endl;
		}
		
		void calSalary()
		{
			cout<<"Employee Salary="<<salary<<endl;
		}
	
	
};

class manager:public employee
{
	private: double incentives;
		string dept_name;
		
	public:
		manager()
		{
			this->incentives=5000;
			this->dept_name = "IT";
		}
		
		manager(int id,string name,int salary,double incentives,string dept_name)
		:employee(id,name,salary)
		
		{
			this->incentives=incentives;
			this->dept_name = dept_name;
		}
		
		
		void accept(double incentives,string dept_name)
		{
			this->incentives=incentives;
			this->dept_name = dept_name;	
		}
		
		
		void manager_task()
		{
			cout<<"\n\n---Manager task---"<<endl;
		}
		
		void calSalary()
		{
			cout<<"\n\nManager Salary= "<<salary+incentives<<endl;
		}
		
		void display()
		{
			employee::display();
			cout<<"  Incentives="<<incentives<<"  Dept_name="<<dept_name<<endl;
		}
		
		
};

int main()
{
	employee emp;
	//emp.accept();
	emp.display();
	emp.calSalary();
	
	manager mngr;
	//mngr.accept(10000,"HR");
	mngr.manager_task();
	mngr.display();
	mngr.calSalary();
}
