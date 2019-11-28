#include <iostream>
#include <conio.h>
using namespace std;

class queue
{	
  int q[5];
  int rear,front;
  public:
  	queue()
	  {
	  	rear=0;
	  	front=0;
	  }
	 void insert(int item)
	 {
	 	if(rear>=4)
		 {
		 	cout<<"queue overflow "<<endl;
		    return ;
		 }
		q[rear]=item;
		rear++; 
	 		
	 } 
	 void delet()
	 {
	 	if(front>=rear||rear==0)
		 {
		 	cout<<"queue underflow ";
		 	return ;
		 }
		 cout<<"deleting element : "<<q[front]<<endl;
		 front++;
	 }
	 void display()
	 {
	 	if(front>=rear||rear==0)
		 {
		 	cout<<"queue is empty "<<endl;
		 	return ;
		 }
		 cout<<"queue elements are :";
		 for(int i=front;i<rear;i++)
		 {
		 	cout<<q[i]<<endl;
		 }
	 }
	
};
int main()
{
	int ch=0,item;
	queue s;
	while(ch<4)
	{
		cout<<"\n1.insert\n2.delete\n3.display\n4.exit\nenter choice :";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"enter the element "<<endl;
			       cin>>item;
			       s.insert(item);
			       break;
			case 2:s.delet();
			       break;
			case 3:s.display();
			       break;
			case 4:break;
			         
		}
	}
	return 0;
}