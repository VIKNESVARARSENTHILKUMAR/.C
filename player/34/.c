#include <stdio.h>
#include<string.h>
int main() 
{
	char a[20];
	int n,i;
	scanf("%s",a);
	n=strlen(a);
  
	printf("%c",a[0]);
  
	for(i=0;i<n;i+=3)
	{
	   printf("%c",a[i+3]);
	}
	return 0;
}
