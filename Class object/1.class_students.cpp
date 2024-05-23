/* 1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.*/

#include<iostream>
using namespace std;

class stduent
{
	public: int rollno;
			int m1,m2,m3;
			double total1;
			double percent1;
			char grade1;
						
			
			void total()
			{
				total1 = m1+m2+m3;
			}
			
			void percent()
			{
				percent1 = ((total1)/300.0)*100;
			}
				 		
			
			void grade()
			{
				if(percent1>90)
				{
					cout<<" A+";
				}
				else if(percent1<90 && percent1>80)
				{
					cout<<" A";
				}
				else if(percent1<80 && percent1>70 )
				{
					cout<<" B";
				}
				else 
				{
					cout<<"Thank you for participation";
				}
			}
			
			
				
			
	public: 
	
	student(int rollno,int m1,int m2,int m3)
	{
		
		this->rollno = rollno;
		this->m1 = m1;
		this->m2 = m2;
		this->m3 = m3;
		
	}

	void accept(int rollno,int m1,int m2,int m3)
	{	
		cout<<"--get assigned--";
		
		this->rollno = rollno;
		this->m1 = m1;
		this->m2 = m2;
		this->m3 = m3;
	}
	
		void displayinfo()
		{
			cout<<" Roll_no= "<<rollno<<", Mark_1 = "<<m1<<", Mark_2= "<<m2<<", Mark_3= "<<m3<<",   Total marks = "<<total1<<", Percentage= "<<percent1<<", grade = "; 
			
		}
		
	
	
};

 
int main()
{
	
	
		stduent obj;		
		cout<<"---The class is---";
		cout<<"Enter the marks:"<<endl;
	
		cout<<"Roll no: "<<endl;
		cin>>obj.rollno;
		cout<<"Marks_1: "<<endl;
		cin>>obj.m1;
		cout<<"Marks_2: "<<endl;
		cin>>obj.m2;
		cout<<"Marks_3: "<<endl;
		cin>>obj.m3;	

	
	
	//obj.accept(101,69,89,78);
	obj.total();
	obj.percent();
	obj.displayinfo();
	obj.grade();
	
	return 0;
	
	
}
