#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = i; j <= n - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0; 
}