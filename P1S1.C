#include<stdio.h>
int main()
{
	char str[10000],len,i,j,temp;
	scanf("%s",str);
	len=strlen(str);
	i=0;
	j=len-1;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf("%s",str);
}
