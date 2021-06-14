#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 30
#define ARR_MAX 50

void	free_arr(int **arr)
{
	int i;

	while(i < N)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	err_exit(void)
{
	perror("Error:");
	exit(0);
}

int		main(void)
{
	srand (time(NULL));
	int **arr;

	if (!(arr = (int **)malloc(sizeof(int*) * N)))
		err_exit();
	for (int i = 0; i < N; i++)
		if (!(arr[i] = (int *)malloc(sizeof(int) * N)))
			err_exit();

	for(int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = rand() % (2 * ARR_MAX) - ARR_MAX;
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if ((arr[i][j] - 1) % 3 == 0)
				printf("arr[%d][%d]:\t%d\n", i, j, arr[i][j]);
		}
	}

	free_arr(arr);
	return (0);
}
