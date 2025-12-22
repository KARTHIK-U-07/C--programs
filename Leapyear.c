#include<stdio.h>
int main()
{
int n;
printf("Enter the Year:",n);
scanf("%d",&n);
if(n%4==0)
{
printf("It is a leap year.");
}
else
{
printf("Is is not a leap year.");
}
return 0;
}
