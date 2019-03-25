#include<stdio.h>
int main()
{
int k,i,c=0,j;
printf("\nEnter the number : ");

scanf("%d",&k);
for(i=0;i<=k;i++)

{
for(j=k;j>=0;j--)
{

if((i*1)+(j*2)==k)
{
c=c+1;
}
}
}
printf("\nBy using 1's and 2's we make %d in %d ways.",k,c);
return 0;
}
