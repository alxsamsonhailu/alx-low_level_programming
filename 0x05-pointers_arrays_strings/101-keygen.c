#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void substract_key(char key[], int len, int checksum);

/**
 * main - Generates a random password
 *
 * Return: Always 0.
 */
int main(void)
{
	/* 2772 */
	char c;
	char key[60];
	int i;
	int r_val;
	int checksum;

	srand ( time(NULL) );

	i = 0;
	r_val = rand();
	checksum = 0;
	while (checksum < 2772)
	{
		c = '0' + (r_val % 10);
		checksum += c;
		r_val /= 10;
		key[i++] = c;
		if (r_val == 0)
			r_val = rand();
	}
	key[i++] = '\0';
	substract_key(key, i, checksum);
	printf("%s\n", key);
	return (0);
}
