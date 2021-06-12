#include <stdio.h>
#include <math.h>

int			main(void)
{
	float	a, b, n, m;

	a = 4.8;
	b = -7.9;

	n = (a >= b) ? cbrtf(a - b) : (a * a + (a - b) / sin(a * b));

	if (n < b)
		m = sqrt(pow(sin(a), 2) - cos(n)) - (n + a) / b;
	else if (n == b)
		m = b * b + tan(n * a);
	else
		m = pow(b, 3) + n * a * a;

	printf("a = %f\nb = %f\n", a, b);
	printf("n = %5f\tm = %5f\n", n, m);
	return (0);
}
