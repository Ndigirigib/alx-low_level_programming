#include "main.h"

/**
 * swap_int - swaps values of two integers.
 * @a: integer to be swaped.
 * @b: integer to be swaped.
 */
void swap_int(int *a, int *b)
{
	int y = *a;

	*a = *b;
	*b = y;
}
