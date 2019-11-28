#include<iostream>
#include<conio.h>
using namespace std;
int main()
 {
 char n;
 cout<<"\n\nEntetr the day of number :";
 cin>>n;
 switch(n)
 {
 case '1':cout<<"Sunday";
 break;
 case '2': cout<<"Monday";
 break;
 case '3': cout<<"Theusday";
 break;
 case '4': cout<<"Wednesday";
 break;
 case '5': cout<<"thursday";
 break;
 case '6': cout<<"friday";
 break;
 case '7':cout<<"saturday";
 break;

 default:
 {
 cout<<"It is not possible";
 }
 }
 getch();
 return 0;
 }