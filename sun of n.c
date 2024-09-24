#include <stdio.h>

int main() 
{
	int denominator = 1, n;
	float ans = 0;
	float res = 0, numerator = 1;
	printf("value of n:\n");
	scanf("%d", &n);
	while(denominator<=n)
	{
		ans = numerator/denominator;
		res = ans+res;
		denominator++;
	}
    return 0;
}
