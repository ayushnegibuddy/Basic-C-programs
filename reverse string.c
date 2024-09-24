#include <stdio.h>
#include <string.h>

int main() {
	char str1[50];
	printf("enter the string:");
	gets(str1);
	printf("reverse a string ");
	strrev(str1);
	printf("after applying strrev on string:");
	puts(str1);
	return 0;
}