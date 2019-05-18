#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int a,b,c,d,e;
cout<<"enter the number of hours"<<endl;
cin>>a;
b=a/168;
c=a%168;
d=c/24;
e=c%24;
cout<<"weeks = "<<b<<" days = "<<d<<" hours = "<<e;
getch();
}
