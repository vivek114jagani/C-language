#include <stdio.h>

void main()
{
	int a[10][10], b[10][10], i, j, flag = 0, r, c;
	printf("Enter Row & Columns For Square Matrix : ");
	scanf("%d%d", &r, &c);
	printf("\nEnter Values For Matrix A :\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter Values For Matrix B :\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("\nMatrix A :\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix B :\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (a[i][j] != b[i][j])
			{
				flag = 1;
				break;
			}
		}
	}
	if (flag == 0)
		printf("\nMatrix A & B are Equal");
	else
		printf("\nMatrix A & B are not Equal");
}