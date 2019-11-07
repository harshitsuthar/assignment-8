#include<stdio.h>
int main()
{int a,b,c=0,x,n;
printf("enter n no.");
scanf("%d",&n);
printf("enter %d no.",n);
for(a=1;a<=n;a++);
{
scanf("%d",&n);
x=(((b%10)*10)+(((b%100)-(b%10))/10));
c=c+x;}
printf("%d",c);
}
