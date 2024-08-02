#include<iostream>
using namespace std;
class bank{
	
	private:
	int acc_id;
	
	protected:
	double balance;
	
	public:
		bank()
		{
			acc_id = 0;
			balance = 0;	
		}
		
		bank(int acc_id,double balance)
		{
			this->acc_id = acc_id;
			this->balance = balance;
		}
		
		void display()
		{
			cout<<"\n\nAccount ID: "<<acc_id<<"   Balance: "<<balance<<endl;
		}
	
};

class savingsAccount: public bank
{
	
	private: double w_amount;
	
	public:
	
	savingsAccount()
	{
		this->w_amount = w_amount;	
	}
	
	savingsAccount(int acc_id,double balance,double w_amount):bank(acc_id,balance)
	{
		this->w_amount = w_amount;	
	}
	
	void withdraw()
	{
		cout<<"After withdraw balance is:  = "<< balance - w_amount<<endl;
	}
	
	void display()
	{
		bank::display();
		cout<<"   Withdraw Amount: "<<w_amount<<endl;
	}
	
	
};

class checkingAccount: public bank{
	
	private: 
	
	double interest;
	
	public:
	
	checkingAccount()
	{
		this->interest = interest;	
	}
	
	checkingAccount(int acc_id,double balance,double interest):bank(acc_id,balance)
	{
		this->interest = interest;	
	}
	
	void interest1()
	{
		cout<<"After adding interest balance is:  = " <<balance * ((interest)/100.0)<<endl;
	}
	
	void display()
	{
		bank::display();
		cout<<"   Interest is: "<<interest<<endl;
	}
	
	
};

int main()
{

bank b(101,50000);

savingsAccount sa(101,50000,5000);
sa.display();
sa.withdraw();


checkingAccount obj(101,50000,7);
obj.display();
obj.interest1();
}

