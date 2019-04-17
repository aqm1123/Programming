#include <math.h>
#include "complex.h"

complex_t add_complex(complex_t c1, complex_t c2)
{
	complex_t c3;
	c3.i = c1.i + c2.i;
	c3.r = c1.r + c2.r;
	return c3;
}

complex_t multiply_complex(complex_t c1, complex_t c2)
{
	complex_t c3;
	c3.r = (c1.r*c2.r) - (c1.i*c2.i);
	c3.i = (c1.r*c2.i) + (c1.i*c2.r);
	return c3;
}

complex_t abs_complex(complex_t c)
{
	complex_t c3;
	c3.r = sqrt(c.r*c.r + c.i*c.i);
	c3.i = 0;
	return c3;
}
