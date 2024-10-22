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
