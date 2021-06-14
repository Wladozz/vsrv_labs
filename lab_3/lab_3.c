#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 30

int					main(void)
{
	srand (time(NULL));
	float			arr[N];
	float			avg_pos = 0;
	unsigned short	am_pos = 0;

	for(int i = 0; i < N; i++)
		arr[i] = rand() % 20 - 10;

	for(int i = 0; i < N; i++)
	{
		if (arr[i] >= 0)
		{
			avg_pos += arr[i];
			am_pos++;
		}
	}
	avg_pos = avg_pos / am_pos;

	for(int i = 0; i < N; i++)
	{
		if (arr[i] < 0)
			arr[i] = avg_pos;
	}

	printf("Avarage: %f\n", avg_pos);
	for(int i = 0; i < N; i++)
		printf("%.2f\n", arr[i]);
	return (0);
}
