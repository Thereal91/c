#include <iostream>
using namespace std;
class room
{
public:
double length,breath,height;
double area()
{
return length * breath;
}
double volume()
{
return length * breath * height;
}
};
int main()
{
room r1;
r1.length = 42.5;
r1.breath = 30.8;
r1.height = 19.2;
cout << "Area of Room = " << r1.area() << endl;
cout << "Volume of Room = " << r1.volume() << endl;
return 0;
}
