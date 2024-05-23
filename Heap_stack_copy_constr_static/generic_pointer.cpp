#include<iostream>
#include<typeinfo>
using namespace std;
class car{
protected:	int speed;
		string name;
		string color;
public:
	car(){
		speed=0;
		name="abc";
		color="red";
	}
	car(int speed,string name,string color)
	
	{
		this->speed=speed;
	this->name=name;
	this->color=color;
	}
	
	void feature()
	{
	}
	
	
	void accept(int speed,string name,string color)
	
	{
		this->speed=speed;
	this->name=name;
	this->color=color;
	}
	
	
	
	virtual void display(){
		
		cout<<"name= "<< name<<"   color= "<<color<<"  speed="<<speed<<endl;
	}
	
};

class SUV:public car{
	
	public:
		SUV(){
		}
		
		SUV(int speed,string name,string color):car(speed,name,color)
	{
		this->speed=speed;
	this->name=name;
	this->color=color;
	}
	
	void accept(int speed,string name,string color)
	
	{
		this->speed=speed;
	this->name=name;
	this->color=color;
	}
	
	
	
	void feature()
	{
		cout<<"SUV is a luxurious"<<endl;
	}
	
	void display(){
		
		cout<<"name= "<< name<<"  color= "<<color<<"  speed="<<speed<<endl;
	}	
};

class sadan:public car{
	
	public:
		sadan(){
		}
		
		sadan(int speed,string name,string color):car(speed,name,color)
	
	{
		this->speed=speed;
	this->name=name;
	this->color=color;
	}
	void accept(int speed,string name,string color)
	
	{
		this->speed=speed;
	this->name=name;
	this->color=color;
	}
	
	
	void feature()
	{
		cout<<"sadan provide safety"<<endl;
	}
	
	void display(){
		
		cout<<"name= "<< name<<"  color= "<<color<<"  speed="<<speed<<endl;
	}	
};

class sports_car:public car{
	
	public:
		sports_car(){
		}
		
		sports_car(int speed,string name,string color):car(speed,name,color)
	
	{
		this->speed=speed;
	this->name=name;
	this->color=color;
	}
	void accept(int speed,string name,string color)
	
	{
		this->speed=speed;
	this->name=name;
	this->color=color;
	}
	

	
	void feature()
	{
		cout<<"sports_car is a faster"<<endl;
	}
	
	void display(){
		
		cout<<"name= "<< name<<"  color= "<<color<<"  speed="<<speed<<endl;
	}	
};

int main(){
	car c;
	//c.display();
	
	SUV s;
	s.accept(90,"alto","white");
	s.feature();
	s.display();
	
	sadan sd;
	sd.accept(120,"verna","grey");
	sd.feature();
	sd.display();
	
	sports_car sp;
	sp.accept(200,"ferrari","red");
	sp.feature();
	sp.display();
	
	int i, ch,speed,index=0;
	string name,color;
	car* show_room[5];
	
	
	typedef SUV SUV;
	SUV  *suv;
	typedef sadan sadan;
	sadan *sdn;
	typedef sports_car sports_car;
	sports_car *spts;
	
	do{
		cout<<"\n\nenter choice:";
		cin>>ch;
		switch(ch){
			case 1:
				
				if (index<5){
				cout<<"enter speed=";
				cin>>speed;					
				cout<<"enter name=";
				cin>>name;
				cout<<"enter color=";
				cin>>color;
				suv= new SUV(speed,name,color);
				show_room[index]=suv;
				//show_room[index]=&suv;
				index++;
				cout<<"suv car is added\n";
				}
				else{
					cout<<"show_room is closed\n";
				}
				break;
			
				
			
			case 2:
				
				if (index<5){
				cout<<"enter speed=";
				cin>>speed;	
				cout<<"enter name=";
				cin>>name;
				cout<<"enter color=";
				cin>>color;
				sdn= new sadan(speed,name,color);
				show_room[index]=sdn;
				//show_room[index]=&sdn;
				index++;
				cout<<"sadan car is added\n";
				}
				else{
					cout<<"show_room is closed\n";
				}
				break;
				
			case 3:
				
				if (index<5){
				cout<<"enter speed=";
				cin>>speed;	
				cout<<"enter name=";
				cin>>name;
				cout<<"enter color=";
				cin>>color;
				spts= new sports_car(speed,name,color);
				show_room[index]=spts;
				//show_room[index]=&spts;
				index++;
				cout<<"sports car is added\n";
				}
				else{
					cout<<"show_room is closed\n";
				}
				break;
				
			case 4:
				cout<<"show all"<<endl;
				
				for(int i=0;i<index;i++)
				{
					show_room[i]->display();
					show_room[i]->feature();
					
					
				}
				
				if(typeid(*show_room[i])==typeid(SUV))
				{
					SUV *suvcar=dynamic_cast<SUV*>(show_room[i]);
					suvcar->feature();
				}
				
				if(typeid(*show_room[i])==typeid(sadan))
				{
					sadan *sadancar=dynamic_cast<sadan*>(show_room[i]);
					sadancar->feature();
				}
				
				if(typeid(*show_room[i])==typeid(sports_car))
				{
					sports_car *spcar=dynamic_cast<sports_car*>(show_room[i]);
					spcar->feature();
				}				
				
				
				break;		
				
		}
		
		
	}
	while( i!=5);
	{
		}	
}


