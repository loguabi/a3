#include<stdio.h>
int main()
{
int a[50],i,j,k;
scanf("%d",&i);
for(j=0;j<i;j++)
scanf("%d",&a[i]);
for(j=0;j<k;j++)
{
for(k=1;k<i;k++)
{
if((a[j]+a[k]==0));
{
printf("%d%d",a[j],a[k]);
break;
}
}
}
return 0;
}
