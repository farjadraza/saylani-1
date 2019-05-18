#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int sec,m,s,h;
cout<<"\n enter time in seconds: ";
cin>>sec;
//h=sec/3600;
sec=sec%3600;
//m= sec/60;
//s=sec%60;
cout<<"\n HH_MM_SS= "<<h<<":"<<m<<":"<<s;
getch();
}
