#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,i,j;
  char a[100];
  char b[100];
  fgets(a,100,stdin);
  fgets(b,100,stdin);
  
  int r=strlen(a);
  int k=strlen(b);
  
  if(r == k)
  {
  for(i=0;i<r;i++)
  {
      for(j=0;j<r;j++)
      {
          if(a[i]==b[j] )
          {
              count++;
              b[j] ='\0';
          }
      }
  }
  
  if(r==count)
  {
      printf("True");
  }
  else
  {
      printf("False");
  }
  }
}
  
