#include<iostream>
using namespace std;
class overload
{
int value;
public:
void set(int temp)
{
value=temp;
}
overload operator + (overload ob)
{
overload t;
t.value = value + ob.value;
return t;
}
void display()
{
cout<<value<<endl;
}
};
int main()
{
overload obj1, obj2, result;
int a,b;
cout<<”Enter the value of a: “;
cin>>a;
cout<<”Enter the value of b: “;
cin>>b;
obj1.set(a);
obj2.set(b);
result=obj1+obj2;
obj1.display();
obj2.display();
cout<<”Result: “;
result.display();
return 0;
}
