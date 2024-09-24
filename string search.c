#include<stdio.h>
#include<string.h>
int main()
{
  char *str1, *str2;
  printf("Enter string 1: ");
  gets(str1);
  printf("Enter string 2: ");
  gets(str2);
  char* x = strstr(str1, str2);
  if (x)
  {
    printf("\n\t\t String is Present!!!");
  }
  
  else
  {
    printf("\n\t\t String is Absent!!!");
  }
  
  return 0;
}