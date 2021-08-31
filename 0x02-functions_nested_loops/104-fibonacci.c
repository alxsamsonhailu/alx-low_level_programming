#include <stdio.h>

void print_overflowed_fib(unsigned long, unsigned long);

/**
 * main - Entry point
 *
@@ -8,24 +10,76 @@
int main(void)
{
	int i;
	unsigned long n1, n2;
	unsigned long fib;

	n1 = 0;
	n2 = 1;

	/* Only prints well the first 77 nums without overflow */
	for (i = 0; i <= 76; i++)
	{
		fib = n1 + n2;

		printf("%lu, ", fib);

		n1 = n2;
		n2 = fib;
	}

	print_overflowed_fib(n1, n2);

	printf("\n");

	return (0);
}
