#include <iostream>
using namespace std;
class base
{ private:
int a,b;
public:
void get()
{
cout<<"enter the two values="<<endl;
cin>>a>>b;
}
friend float mean( base ob);
};
float mean(base ob)
{
return float(ob.a+ob.b)/2;
}
int main()
{
base b1;
b1.get();
cout<<"MEAN VALUE="<<mean(b1)<<endl;
return 0;
}
