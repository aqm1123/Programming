#include <stdio.h>
#include <math.h>
#include "complex.h"
#include "mandelbrot.h"

int main(void)
{
	double x, y;
	complex_t c, m;
	// start of nested loop
	for (x = -2.00; x <= 0.47; x += 0.06175)
	{
		for (y = -1.12; y <= 1.12; y += 0.077)
		{
			//uses loop values for c
			c.r = x;
			c.i = y;
			m = mandelbrot(15, c);
			// checks for numbers too big
			if (m.r == 10000.0)
			{
				printf(" ");
			}
			else
			{
				printf("#");
			}
		}
		printf("\n");
	}
	return 1;
}
