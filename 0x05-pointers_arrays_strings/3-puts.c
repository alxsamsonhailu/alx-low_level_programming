#include "main.h"

/**
@@ -7,5 +6,12 @@
 */
void _puts(char *str)
{
	puts(str);
	int len;

	len = 0;

	while (*(str + len) != '\0')
		_putchar(*(str + len++));

	_putchar('\n');
}
