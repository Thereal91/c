#include<stdio.h>
int main()
{
int add(int x,int y);
int a,b,c;
printf("\n Enter the values of a and b :" );
scanf("%d%d",&a,&b);
c= add(a,b);
printf("\n c= %d\n ",c);
}
int add(int x, int y)
{
int z;
z=x+y;
return z;
}
