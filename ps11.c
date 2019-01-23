#include<stdio.h>
#include<string.h>
void main()
{
  int i,l;
  char a[100000];
  scanf("%s",a);
  l=strlen(a);
  for(i=l-1;i>=0;i--)
  {
  printf("%c",a[i]);
  }
}
