#include <iostream>
#include <conio.h>
using namespace std;

class stack
{
	int a[5];
	int top;
	public:
		stack()
		{
			top=0;
		}
		void push(int x)
		{
			if(top>4)
			{
				cout<<"stack is overflow"<<endl;
				return;
			}
			a[top]=x;
			top++;
			
		}
		void pop()
		{
			if(top<0)
			{
				cout<<"stack is underflow"<<endl;
				return ;
			}
			cout<<"deleting element : "<<a[top];
			a[top--];
		}
		void display()
		{
			for(int i=top;i>=0;i--)
			{
				cout<<a[i]<<endl;
			}
		}
};
int main() 
{
	int ch=0,item;
	stack s;
	while(ch<4)
	{
		cout<<"\n1.push\n2.pop\n3.display\n4.exit\nenter choice";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"enter the element "<<endl;
			       cin>>item;
			       s.push(item);
			       break;
			case 2:s.pop();
			       break;
			case 3:s.display();
			       break;
			case 4:break;
			         
		}
	}
	return 0;
}	