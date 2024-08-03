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
		
		
		virtual void display()
		{
			cout<<"ID= "<<id<<"  Name= "<<name<<"  salary = "<<salary<<endl;
		}
		
		virtual void calSalary()
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
			cout<<"Manager Salary= "<<salary+incentives<<endl;
		}
		
		void display()
		{
			employee::display();
			cout<<"Manager:"<<"  Incentives="<<incentives<<"  Dept_name="<<dept_name<<endl;
		}
		
		
};

class Developer:public employee
{
	
	double pa,fa,ta;
	
	public:	Developer()
	{
		pa,fa,ta=1000;
	}
	
	
	
	Developer(int id,string name,double salary,double pa,double fa,double ta):employee(id,name,salary)
	{
		this->pa=pa;
		this->fa=fa;
		this->ta=ta;
	}
	void targets()
	{
	cout<<"\n\Developer Task "<<endl;	
	}
	
	void accept(int pa,int fa, int ta)
	{
		this->pa=pa;
		this->fa=fa;
		this->ta=ta;	
	}

     	void display()
     	{
     	employee::display();
     	cout<<"Developer:"<<"pa= "<<pa<<"   "<<"ta"<<ta<<"    "<<"fa"<<fa<<endl;
     	
	}
	
	
	
	 void calSalary()
     	{
     	cout<<"Developer Salary="<<(pa+fa+ta+this->salary)<<endl;
	 }	 
	 
};

int main()
{
	employee emp;
	emp.display();
	emp.calSalary();
	
	manager mngr;
	mngr.accept(10000,"HR");
	mngr.manager_task();
	mngr.display();
	mngr.calSalary();
	
	Developer dv;
	dv.accept(1000,5000,3000);
	dv.targets();
	dv.display();
	dv.calSalary();
	
	cout<<"\n\n\nUsing array generic pointer"<<endl;
	cout<<"\nEmployee Details\n";
	
	employee* institute[3];
	institute[0] = &emp;
	institute[1] = &mngr;
	institute[2] = &dv;
	
	int i;
	for(i=0;i<3;i++)
	{
		institute[i]->display();
		institute[i]->calSalary();
		
	}

		
}
