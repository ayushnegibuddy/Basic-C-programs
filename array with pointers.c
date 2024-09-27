#include<stdio.h>
int main()
{
	int a[5];
	int *ptr;
	ptr = a;
	printf("input for array a[5] \n");
	for (int i=0;i<5;i++)
	{
		scanf("%d", ptr+i);
	}
	printf("the elemets of array are: \n");
	for(int i=0;i<5;i++)
	{
		printf("%d ", *(ptr+i));
	}
	return 0;
}