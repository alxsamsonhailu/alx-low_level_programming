#include "main.h"
#include <stdio.h>

int brute_force_sqrt(int, int);
int newton_sqrt(int, int);

/**
@@ -16,7 +18,25 @@ int _sqrt_recursion(int n)
	if (n <= 1)
		return (n);

	return (brute_force_sqrt(n, 2));
}

/**
 * brute_force_sqrt - Calculates the sqrt root of n based on Newton's rule
 * @n: Num to calculate the sqrt root
 * @factor: Factor to be tested as sqrt root
 *
 * Return: Natural sqrt root of n
 */
int brute_force_sqrt(int n, int factor)
{
	if (factor * factor < n)
		return (brute_force_sqrt(n, factor + 1));

	if (factor * factor == n)
		return (factor);

	return (-1);
}

/**
@@ -28,13 +48,16 @@ int _sqrt_recursion(int n)
 */
int newton_sqrt(int n, int x)
{
	/*
	 * This method needs to handle overflow, that's why the cast is needed
	 */
	unsigned long root = (x + (n / x)) / 2;

	if (root * root > (unsigned long)n)
		return (newton_sqrt(n, root));

	if (root * root == (unsigned long)n)
		return ((int)root);

	/*
	 * If the root^2 is less than n means that n
	 * doesn't have natural square root
	 */
	return (-1);
}
