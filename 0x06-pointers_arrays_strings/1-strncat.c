#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 
#include <string.h>
:winclude "main.h"

*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, lenDest;

	lenDest = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		if (n < lenDest)
			dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

