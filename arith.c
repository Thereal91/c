#include<stdio.h>
int main()
{
int a,b,c;
float avg;
printf("\n Enter the two values");
scanf("%d%d",&a,&b);
c=a+b;
printf("\n\t a+b = %d", c);
c=a-b;
printf("\n\t a-b = %d", c);
c= a*b;
printf("\n\t a*b = %d", c);
c=a/b;
printf("\n\t a/b = %d", c);
c=a%b;
printf("\n\t Remainder = %d", c);
avg = (float)(a+b)/2;
printf("\n\t Average = %f", avg);
return 0;
}
