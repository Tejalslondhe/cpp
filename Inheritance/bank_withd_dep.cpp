#include<iostream>
using namespace std;
class bank_acc{
	
	private:
	int acc_no;
	string name;
	double balance;
	double amt;
	
	
	
	public:
		bank_acc()
		{
			acc_no = 0;
			name = "xyz";
			balance = 0;	
		}
		
		bank_acc(int acc_no,string name,double balance)
		{
			this->acc_no = acc_no;
			this->name = name;
			this->balance = balance;
		}
		
		void accept (int acc_no,string name,double balance)
		{
			this->acc_no = acc_no;
			this->name = name;
			this->balance = balance;
		}
		
		void display()
		{
			cout<<"Account no."<<acc_no<<" Name:"<<name<<" Balance:"<<balance<<endl;
		}
		
		
		void withdraw()
		{
			cout<<"\nEnter the amount to withdraw: ";
			cin>>amt;
			cout<<"After withdraw balance is: "<<balance-amt<<endl; 
		}
		
		
		void deposit()
		{	cout<<"\nEnter the amount to deposit: ";
			cin>>amt;
			cout<<"After deposit balance is: "<<balance+amt<<endl; 
		}
	
};

int main()
{
	double amt;
	bank_acc b;
	b.accept(105,"Raman",60000);
	b.display();
	b.deposit();
	b.withdraw();
	
}
