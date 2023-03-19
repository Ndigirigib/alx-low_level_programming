#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	char *p;
	
		
	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
