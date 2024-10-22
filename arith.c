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
EX:2(a) SIMPLE IF
/*SIMPLE IF*/
#include<stdio.h>
int main()
{
int num;
printf("\n Enter a number: ");
scanf("%d",&num);
if(num<0)
{
printf("\n Given number is Negative: %d",num);
}
printf("\n Try another number\n");
return 0;
}
EX:2(b) IF ELSE
/*IF ELSE PROGRAM*/
#include<stdio.h>
int main()
{
int n;
printf("\n ENTER A NUMBER: ");
scanf("%d", &n);
if(n%2==0)
{
printf("\n THE GIVEN NUMBER IS EVEN\n");
}
else
printf("\n THE GIVEN NUMBER IS ODD\n");
return 0;
}
