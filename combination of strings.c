#include <stdio.h>
#include <string.h>

int main() {
	char str1[100], str2[40];
	printf("enter string 1:");
	gets(str1);
	printf("enter string 2:");
	gets(str2);
	strcat(str1,str2);
	printf("after combination: ");
	puts(str1);
	
	return 0;
}