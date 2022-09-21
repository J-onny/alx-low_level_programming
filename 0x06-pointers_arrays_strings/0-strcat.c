#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest:  input string
 * @src:  input string
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = '\0';
	return (tmp);
}
