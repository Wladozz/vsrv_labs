#include <stdio.h>

#define FIT			printf("Точка попадает в область\n");
#define NOT_FIT		printf("Точка не попадает в область\n");

int			main(void)
{
	float	x, y;

	printf("Введите координаты точки: ");
	scanf("%f%f", &x, &y);

	if (y >= 0 && y <= x + 1 && y <= 1 - x)
		FIT
	else if (y < 0 && x >= 0 && y >= x - 1)
		FIT
	else
		NOT_FIT
	return (0);
}
