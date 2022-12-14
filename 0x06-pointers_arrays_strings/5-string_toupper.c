#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a  string
 * to upper case
 * @s: Input string
 * Return: char pointer to converted string
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}

