/*9. Consider that payroll software needs to be developed for computerization of operations of an ABC
organization. The organization has employees.
9.1. Construct a class Employee with following members using private access specifies:
Employee Id integer
Employee Name string
Basic Salary double
HRA double
Medical double=1000
PF double
PT double
Net Salary double
Gross Salary double
Please use following expressions for calculations: //Note: Don’t accept HRA,PF PT from user
* HRA = 50% of Basic Salary
* PF = 12% of Basic Salary
* PT = Rs. 200
9.2. Write methods to display the details of an employee and calculate the gross and net salary.
* Goss Salary = Basic Salary + HRA + Medical
* Net Salary = Gross Salary – (PT + PF)
9.3 Create Object of employee class and assign values and display Details.
*/


#include<iostream>
using namespace std;

class Employee{
	
	private :int empid;
	        string name;
	        double salary;
	        double HRA;
	        double medical=1000;
	        double PF;
	        double PT=200;
	        double Gross_salary;
	        double Net_salary;
	        
	public:
	
	
			Employee()
		   {
				cout<<"---default---Employee----"<<endl;
				this->empid=101;
				name="Ram";
				salary=50000;
				medical=1000;
				PT=200;
				Gross_salary = 0;
				Net_salary = 0;
			}
			
			
			Employee(int empid,string name,double salary)
			{
				this->empid=empid;
				this->name=name;
				this->salary=salary;
				
				cout<<"------parameter Employee-----"<<endl;
			}
	       
	       void HRA_cal()
	       {
	       	HRA = 0.50*salary;
		   }
		   
		   void PF_cal()
		   {
		   	PF = 0.12*salary;
		   }
		   
		   
	       void Gross_salary_cal()
	       {
	       		Gross_salary = salary + HRA + medical;
		   }
		   
		   void Net_salary_cal()
	       {
	       		Net_salary = Gross_salary - PT - PF;
		   }
		   
		   void accept(int empid,string name,double salary)
			{
				this->empid=empid;
				this->name=name;
				this->salary=salary;
				
		    }
		       
	       
			
			void displayDetails()
			{
				cout<<"----employe displayDetails----"<<endl;
				cout<<"\n"<<empid<<"  "<<name<<"  "<<salary<<"  "<<Gross_salary<<"  "<<Net_salary<<endl;
			}



};


int main()
{
	Employee obj;
	obj.PF_cal();
	obj.HRA_cal();
	obj.Gross_salary_cal();
	obj.Net_salary_cal();
	
	obj.accept(512,"Jay",100000);
	obj.displayDetails();
	
}

