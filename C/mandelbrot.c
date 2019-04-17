#include <math.h>
#include "complex.h"
#include "mandelbrot.h"

complex_t mandelbrot(int n, complex_t c)
{
	complex_t m, p;
	if (n==0) // break out condition
	{
		return c;
	}
	else // recursive statement
	{
		m = mandelbrot(n-1, c);
		m = add_complex(multiply_complex(m, m), c);
	}
	if (abs_complex(m).r >= 10000) // condition if abs(m) is too big, exits
	{
		m.i = 0;
		m.r = 10000;
		return m;
	}
	return m;
}
