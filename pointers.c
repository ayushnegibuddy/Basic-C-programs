#include<stdio.h>
int main()
{
	int num1;
	int *ptr;
	printf("\n enter value of num1:");
	scanf("%d",&num1);
	printf("The address of location of num1: %d", &num1);
	return 0;
}