#include<stdio.h>
int main()
{
int a,b,c,n,d=0;
printf("give no. n");
scanf("%d",&n);
printf("give %d no.",n);
for(a=1;a<=n;a++)
{
scanf("%d",&b);
c=b%100;
d=d+c;
}
printf("%d",d);

}
