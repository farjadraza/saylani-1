#include<iostream.h>
#include<conio.h>
#include<stdio.h>
//#define array 5
void main()
{
clrscr();
int arr[5];
int i;
float total=0, average;
cout<<"sum of array in c++ \n";
for (i=0;i<5;i++)
{
cout<<"enter the number : "<< (i+1)<<"  : ";
cin>>arr[i];
}
for (i=0; i<5; i++)
{
total=total + arr[i];
}
average= total/5;
cout<<"\n sum of all numbers = "<< total<<"\n";
cout<<"\n average of all input numbers = "<<average<<"\n";
getch();
}