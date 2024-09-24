#include<stdio.h>
int main()
{
	char alpha;
	printf("Enter the letter \n");
	scanf("%c", &alpha);
	
	if(alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
	{
		printf("Vowel hai \n");
	}
	else
	{
		printf("Consonant hai \n");
	}
	return 0;
}