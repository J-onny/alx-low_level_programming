#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - This function allocates memory using malloc
 * @b: Number(s) of byte to be allocated
 *
 * Return: A pointer to allocated memory
 */


void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

