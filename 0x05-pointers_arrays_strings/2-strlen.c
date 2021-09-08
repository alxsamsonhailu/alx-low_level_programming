#include "main.h"

/**
@@ -9,5 +8,14 @@
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	return (len);
}
