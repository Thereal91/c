#include<iostream>
using namespace std;
class student
{
protected:
int rno,m1,m2,m3,total;
char name[50],result[5];
public:
void get()
{
cout<<endl<<"Enter your name,rno,m1,m2,m3 : ";
cin>>name>>rno>>m1>>m2>>m3;
}
};
class student1: public student
{
public:
void calculate()
{
total=m1+m2+m3;
if(m1>=40&&m2>=40&&m3>=40)
cout<<”Result : PASS");
else
cout<<”Result : FAIL");
}
void display()
{
cout<<endl<<"Name: "<<name;
cout<<endl<<"Roll No. : "<<rno;
cout<<endl<<" Mark1 : "<<m1;
cout<<endl<<" Mark2 : "<<m2;
cout<<endl<<" Mark3 : "<<m3;
cout<<endl<<" Total : "<<total;
cout<<endl<<" Result : "<<result;
}
};
int main()
{
student1 s1;
s1.get();
s1.calculate();
s1.display();
return 0;
}
