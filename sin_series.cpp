#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float x,sum ,t;
	int i,n;
	cout<<"ENTER VALUE OF ANGLE :";
	cin>>x;
	x=x*3.14159/180;
	t=x;
	sum=x;
	for(i=1;i<10;i++)
	{
		t=(t*(-1)*x*x)/(2*i*(2*i+1));
		sum=sum+t;
	}
	cout<<"SIN("<<x*180/3.14159<<") = "<<setprecision(4)<<sum;
	return 0;
}