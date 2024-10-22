#include<iostream>
using namespace std;
int add(int a,int b)
{
return a+b;
}
int add(int a,int b, int c)
{
return a+b+c;
}
double add(double a, double b)
{
return a+b;
}
double add(int a, double b)
{
return a+b;
}
int main()
{
cout<< add(25,15)<<endl;
cout<<add(15,5,8)<<endl;
cout<< add(25.5,15.8)<<endl;
cout<< add(11,9.2)<<endl;
return 0;
}
