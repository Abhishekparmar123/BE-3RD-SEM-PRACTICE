#include <iostream>
#include <math.h>
using namespace std;
int main()
{	
	int n,r,a,rn=0;
	cout<<"enter a value : ";
	cin>>a;
	n=a;
	int i=0;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		cout<<" "<<r;
		i++;
	}
	n=a;
	i--;
	for(;i>=0;i--)
	{
		r=n%10;
		n=n/10;
       rn=rn+r*pow(10,i);
	}
	
	cout<<endl<<rn;
    return rn;
}