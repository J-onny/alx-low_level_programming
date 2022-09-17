#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char capital = 'A';
	int isupper = 0;

	for (capital = 'A'; capital <= 'Z'; capital++)
	{
		if (c == capital)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}

