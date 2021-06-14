#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 30

int		main(void)
{
	srand (time(NULL));
	int	arr[N][N];
	int sum;
	int sum_max = 0;
	int j;

	for(int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = rand() % 20 - 10;
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}

	for(int i = 1; i < N; i++)
	{
		sum = 0;
		j = 0;

		while (j + i < N)
		{
			sum += arr[j + i][j];
			j++;
		}
		if (sum > sum_max)
			sum_max = sum;

		sum = 0;
		j = 0;
		while (j + i < N)
		{
			sum += arr[j][j+ i];
			j++;
		}
		if (sum > sum_max)
			sum_max = sum;
	}

	printf("\nMax sum: %d\n", sum_max);
	return (0);
}
