#include<iostream>
using namespace std;
class Employee
{
int id, bp, hra, da, gp, np, tax;
char name[25];
public:
void get();
void grosspay();
void netpay();
void display();
};
void Employee::get()
{
cout<<"ENTER EMPLOYEE NAME: "<<endl;
cin>>name;
cout<<"ENTER EMPLOYEE ID: "<<endl;
cin>>id;
cout<<"ENTER BASIC PAY: "<<endl;
cin>>bp;
}
void Employee::grosspay()
{
if(bp>30000)
{
hra = bp * 0.20;
da = bp * 0.30;
tax = bp * 0.05;
}
{
hra = bp * 0.10;
da = bp * 0.20;
tax = bp * 0.0;
}
gp = bp + hra +da;
}
void Employee:: netpay()
{
np = gp - tax;
}
void Employee::display()
{
cout<<name<<"\t\t"<<id<<"\t"<<bp<<"\t"<<hra<<"\t"<<da<<"\t"
<<tax<<"\t"<<gp<<"\t"<<np<<"\t"<<endl;
}
int main()
{
int n, i;
Employee e[10];
cout<<"ENTER THE NUMBER OF EMPLOYEES: "<<endl;
cin>>n;
for(i=0;i<n;i++)
{
e[i].get();
e[i].grosspay();
e[i].netpay();
}
cout<<"EMPLOYEE NAME\tID\tBP\tHRA\tDA\tTAX\tGP\tNP"<<endl;
for(i=0;i<n;i++)
{
e[i].display();
}
return 0;
}
