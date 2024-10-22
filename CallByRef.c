#include<stdio.h>
int main()
{
void swap(int *x,int *y);
int a,b;
printf("\n Enter the values of a and b :" );
scanf("%d%d",&a,&b);
printf("\n Before Swap a= %d b= %d \n ",a,b);
swap(&a,&b);
printf("\n After Swap a= %d b= %d \n ",a,b);
}
void swap(int *x, int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}
