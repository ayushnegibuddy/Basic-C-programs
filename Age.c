#include<stdio.h>
int main()
{
	int age1, age2, age3;
	printf("\n To understand operators");
	
	printf("\n Enter age of 1st person");
	scanf("%d", &age1);
	
	printf("\n Enter age of 2nd person");
	scanf("%d", &age2);
	
	printf("\n Enter age of 3rd person");
	scanf("%d", &age3);
	
	if (age1>age2 && age1>age3)
	{
		printf("First is older");
	}
	else if (age2>age1 && age2>age3)
	{
		printf("Second is older");
	}
	else
	{
		printf("Third is older");
	}
	return 0;
}