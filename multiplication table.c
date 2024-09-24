#include <stdio.h>
int main()
{
	int n;
	printf("Enter num. \n");
	scanf("%d", &n);
	int num2=1, ans;
	while(num2 <=10)
	{
		ans = n * num2;
		printf("%d * %d = %d \n", n, num2, ans);
		num2++;
	
	}
	return 0;
	
}