#include<iostream>
#include<conio.h>
using namespace std;
int main()
 {
 for(int i=2;i<=4;i++)
 {
 cout<<"where k = kilogram: g =gram: m =meter: c=centimeter: "<<endl;

 float b,kg,g,m,cm;
 char a;
 cout<<"\n\nenter any quantity which you want to convert(g,k,m,c): ";
 cin>>a;
 switch(a)
 {
 case 'k':cout<<"Enter kilogram  number ::";
          cin>>kg;
          cout<<"Gram ::";
          cout<<kg<<"*"<<"1000"<<"=";
          g=kg*1000;
          cout<<g<<"gram";
	  break ;
 case 'g':cout<<"Enter gram value ::";
          cin>>g;
          cout<<"Kilogram::";
	  cout<<g<<"/"<<"1000"<<"=";
          kg=g/1000;
          cout<<kg<<"kilogram";
          break ;
case 'c':cout<<"Enter centimeter value::";
          cin>>cm;
          cout<<"meter"<<"\n";
	  cout<<cm<<"/"<<"100"<<"=";
	  m=cm/100;
	  cout<<m<<"meter";
          break;
case 'm' :cout<<"Enter meter value::";
          cin>>m;
          cout<<"centimeter";
	  cout<<m<<"*"<<"100"<<"=";
	  cm=m*100;
	  cout<<cm<<"centimeter";
          break ;

 default:
 {
 cout<<"It is not possible";
 }
 }
 getch();
 }
 return 0;
 }
