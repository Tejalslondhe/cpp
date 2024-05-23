/*assignment:Exception
create Stack class  for storing 10 numbers
create function push(int number)--->number will get stored in array
create function pop() will return top most number ,last added number

Note:Hadle StackFull and StackEmpty Exception
Stack s;//array[4];
s.push(10);s.push(20);s.push(30);//s.push(40); s.push(50);

int a=s.pop();//------> 30
  a=s.pop();//----->20
   a=s.pop();//------>10

s.pop();*/
#include<iostream>
using namespace std;
class stack
{
    private:
    int a[4];
    int top;
    public: stack()
        {
                this->a[4]={-1};
                top=-1;
            
        }
        void push(int value)
{
      if(top==3)
        {
           // cout<<"Stack is full\n"<<endl;
           throw 10;
        }
        else
        {
           cout<<"Add element on stack\n"<<endl;
        
           top++;
           a[top]=value;


        }
}
        void display()
        {  
            for(int i=top;i>=0;--i)
            {
                cout<<a[i]<<endl;
            }
    }  


     void pop()
        {
            if(top==-1)
            {
               // cout<<"Stack is empty\n"<<endl;
               throw 20;
            }
            else{
           cout<<"Remove element on stack\n"<<endl;
        
           a[top]=-1;
           top--;
            }


        }
        void seek()
        {    cout<<"Displaying top element from stack is\n"<<endl;
           cout<<a[top]<<endl;;
       
        }
};
int main()
{
    stack s;
   try
   {
    

    s.push(10);
    s.display();
    s.push(20);
    s.display();
    s.push(30);
    s.display();
    s.seek();
   
   s.push(40);
    s.display();
    s.push(10);
    s.display();
   }
   
    catch(int no)
    {
        if (no==10)
        cout<<"stack is full"<<endl;
        else
        cout<<"stack is empty"<<endl;
    }
    return 0;
}
