#include<iostream>
using namespace std;
inline float mul(float x, float y)
{
return(x*y);
}
inline float cube(float x)
{
return x*x*x;
}
int main()
{
int a,b;
cout<<"enter two values =";
cin>>a>>b;
cout<<"multiplication ="<<mul(a,b)<<"\n";
cout << "cube is = " << cube(b) << "\n";
return 0;
}
