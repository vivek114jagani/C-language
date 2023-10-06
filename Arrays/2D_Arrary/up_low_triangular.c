#include <stdio.h>

void main()
{
	int a[10][10], i, j, n;

	printf("Enter Row & Columns For Square Matrix : ");
	scanf("%d", &n);
	printf("\nEnter Values :\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nMatrix A :\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\nLower Triangular Matrix :\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i >= j)
				printf("%d\t", a[i][j]);
			else
				printf("0\t");
		}
		printf("\n");
	}
	printf("\nUpper Triangular Matrix :\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i <= j)
				printf("%d\t", a[i][j]);
			else
				printf("0\t");
		}
		printf("\n");
	}
}
