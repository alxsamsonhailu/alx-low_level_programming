#include <stdio.h>

/**
 * print_overflowed_fib - Prints the fiboacci numbers in two halves
 * to avoid overflow
 * @n1: penultimate fib without overflow
 * @n2: last fib without overflow.
 */
void print_overflowed_fib(unsigned long n1, unsigned long n2)
{
	int i;
	unsigned long n1_half1, n1_half2;
	unsigned long n2_half1, n2_half2;
	unsigned long fib_half1, fib_half2;

	unsigned long divisor;

	/* Start printing the resting 21 fib numbers */
	/* numbers are 21 digits long */
	divisor = 10000000000;
	n1_half1 = n1 / divisor;
	n1_half2 = n1 % divisor;

	n2_half1 = n2 / divisor;
	n2_half2 = n2 % divisor;

	for (i = 0; i <= 20; i++)
	{
		fib_half2 = n1_half2 + n2_half2;
		fib_half1 = n1_half1 + n2_half1;

		if (fib_half2 > divisor - 1)
		{
			/* get rid of the excess unit */
			fib_half2 %= divisor;
			/* add the excess to first half */
			fib_half1 += 1;
		}

		printf("%lu%010lu", fib_half1, fib_half2);

		if (i < 20)
			printf(", ");

		n1_half1 = n2_half1;
		n1_half2 = n2_half2;

		n2_half1 = fib_half1;
		n2_half2 = fib_half2;
	}
}
