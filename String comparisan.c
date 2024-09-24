
#include<stdio.h>
#include<string.h>
int main()
{
  char str1[50], str2[50];
  printf("Enter string 1: ");
  gets(str1);
  printf("Enter string 2: ");
  gets(str2);
  
  if(strcmp(str1, str2) == 0)
  {
    printf("\n\t\t Strings are exactly same!!!");
  }
  
  else
  {
    printf("\n\t\t Strings are not same!!!");
  }
  
  return 0;
}