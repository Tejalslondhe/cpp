#include<iostream>
using namespace std;

class libraryItem{
	
	public: 
			string title;
			string author;
			
			
			
	libraryItem()
	{
		title = "XYZ"; author="ABC"; 
	}
			
	libraryItem(string title, string author)
	{
		this->title=title;
		this->author=author;	
	}
	
	
	
	
	void accept(string title, string author)
	{		
		this->title=title;
		this->author=author;
	}
	
	
	
			
	void display()
	{
		cout<<"Book Name: "<<title<<endl<<"Author: "<<author<<endl;
	}
	
	void num_page()
	{
		
	}
	
	void check_out()
	{
	}
	
	void returned()
	{
	}		
	
			
};

class book:public libraryItem{
	
	public:book()
	{
	}
	
	book(string title, string author):libraryItem(title,author)
	{
		this->title=title;
		this->author=author;
	}
	
	void num_page()
	{
		cout<<"Books are generally large and having more pages.";
	}
	
	void display()
	{
		cout<<"Book Name: "<<title<<endl<<"Author: "<<author<<endl;
	}
	
	void check_out()
	{
		cout<<"\n"<<title<<" by author "<<author<<" book has been check out."<<endl;
	}
	
	
	
	void returned()
	{
		cout<<title<<" by author "<<author<<" book has been returned."<<endl;
	}
};

class journal:public libraryItem{
	
	public:
	
	journal()
	{
	}
	
	journal(string title, string author):libraryItem(title,author)
	{
		this->title=title;
		this->author=author;
	}
	
	void num_page()
	{
		cout<<"Journals are generally small and having near about 15 pages.";
	}
	
	void display()
	{
		cout<<"\n\nJournal Name: "<<title<<endl<<"Author: "<<author<<endl;
	}
	
	void check_out()
	{
		cout<<"\n"<<title<<" by author "<<author<<" journal has been check out."<<endl;
	}
	
	
	
	void returned()
	{
		cout<<title<<" by author "<<author<<" journal has been returned."<<endl;
	}
}; 

int main()
{
	libraryItem obj;

	
	book b;
	b.accept("Who I am?","XYZ");
	b.display();
	b.num_page();
	b.check_out();
	b.returned();
	
	cout<<endl;
	
	journal j;
	j.accept("Science world","ABC");
	j.display();
	j.num_page();
	j.check_out();
	j.returned();
	
		
}
