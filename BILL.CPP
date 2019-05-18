#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int dish,a,d=0,c,b[5];
clrscr();
cout<<"\t\t\t WELCOME TO BIRYANI.COM"<<endl;
cout<<"\t\t\t\t   MENU"<<endl;
cout<<"1  BIRYANI                 120/="<<endl;
cout<<"2  NIHARI                  150/="<<endl;
cout<<"3  KARAHI                  200/="<<endl;
cout<<"4  QORMA                   130/="<<endl;
cout<<"5  MUTTON KUNNA            250/="<<endl;
cout<<"6  SINGAPOORIAN RICE       300/="<<endl;
cout<<"7  FRIED RICE              300/="<<endl;
cout<<"8  HANDI                   250/="<<endl;
cout<<"9  CHICKEN MANCHURIAN      300/="<<endl;
cout<<"10 FRIED FISH              400/="<<endl;
cout<<endl;
cout<<"HOW MANY DISHES YOU WANT TO EAT "<<endl;
cin>>dish;
for (a=1;a<=dish;a++)
{
cout<<"ENTER THE NUMBER OF DISH"<<endl;
cin>>b[a];
switch (b[a])
{
case 1:d=d+120;break;
case 2:d=d+150;break;
case 3:d=d+200;break;
case 4:d=d+130;break;
case 5:d=d+250;break;
case 6:d=d+300;break;
case 7:d=d+300;break;
case 8:d=d+250;break;
case 9:d=d+300;break;
case 10:d=d+400;break;
default:
cout<<"WRONG INPUT"<<endl;
a=--a;
break;
}
}
clrscr();
cout<<"\t\t\t WELCOME TO BIRYANI.COM"<<endl;
cout<<"\t\t\t\t   BILL"<<endl;
cout<<"\n"<<endl;
for (c=1;c<=dish;c++)
{
switch(b[c])
{
case 1:cout<<"1  BIRYANI                    120/=\n";break;
case 2:cout<<"2  NIHARI                     150/=\n";break;
case 3:cout<<"3  KARAHI                     200/=\n";break;
case 4:cout<<"4  QORMA                      130/=\n";break;
case 5:cout<<"5  MUTTON KUNNA               250/=\n";break;
case 6:cout<<"6  SINGAPOORIAN RICE          300/=\n";break;
case 7:cout<<"7  FRIED RICE                 300/=\n";break;
case 8:cout<<"8  HANDI                      250/=\n";break;
case 9:cout<<"9  CHICKEN MANCHURIAN         300/=\n";break;
case 10:cout<<"10 FRIED FISH                400/=\n";break;
default:cout<<"\n"<<endl;break;
}
}
cout<<"\n\n YOUR BILL IS  "<<d<<endl;
getch();
}


