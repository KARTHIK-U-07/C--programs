#include<stdio.h>
int main()
{
int i,n;
long long fact=1;
printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
fact=fact*i;
}
printf("factorial =%lld",fact);
return 0;
}
