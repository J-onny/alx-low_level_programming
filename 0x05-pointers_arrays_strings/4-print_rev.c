#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line.
 * @s: input string
 * Return: Nothing
 */
void print_rev(char *s)
{
	char *length = s;

	while (*length)
		length++;
	length = length - 1;

	while (length)
	{
		_putchar(*s);
		length--;
	}
	_putchar('\n');
}

