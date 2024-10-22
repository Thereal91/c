#include<iostream>
using namespace std;
class constructor
{
int a,b;
public:
constructor()
{
a=10;
b=20;
}
constructor(int x, int y)
{
a=x;
b=y;
}
void display()
{
cout<<"\n a="<<a<<endl;
cout<<"\n b="<<b<<endl;
}
};
int main()
{
constructor obj1;
constructor obj2(25,50);
obj1.display();
obj2.display();
return 0;
}
