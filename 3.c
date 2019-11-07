#include<stdio.h>
int main()
{
int a,b,c,d=0,n;
printf("enter no. n");
scanf("%d",&n);
printf("give %d no.",n);
for(a=1;a<=n;a++)
{
scanf("%d",&c);
b=((c-(c%10))/10)%10;
d=d+b;
}
printf("%d",d);
}
