#include <iostream>
using namespace std;
int main() 
{
	int i,j,k,n,a;
	cout<<"enter base size : ";
	cin>>n;
	for(a=1;a<=n;a++)
	{ 
	 for(i=1;i<=a*2;i+=2)
      {
	     	for(j=15;j>=i;j-=2)
              {
		     	cout<<" ";
		      }
		    for(k=1;k<=i;k++)
		      { if(a!=1)
			    cout<<"*";
		      }
		    cout<<endl;
	   }   
	}
	for(i=1;i<=4;i++)
	{
		cout<<"        ^"<<endl;
	}
	cout<<"     -------";
	return 0;
}