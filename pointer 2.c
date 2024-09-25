#include<stdio.h>
int main()
{
	int num1;
	int *ptr;
	ptr = &num1;
	printf("\n enter value of num1:");
	scanf("%d",&num1);
	printf("The address of location of num1: %d \n", &num1);
	printf("value of num1: %d", *ptr);
	return 0;
}