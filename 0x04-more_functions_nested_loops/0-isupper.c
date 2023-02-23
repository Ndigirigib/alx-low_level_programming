#include "main.h"

/**
 * _isupper - function checks for uppercase character.
 *
 * @c : the character we're checking.
 *
 * Return: 1 if character is uppercase, otherwise 0.
 */
int _isupper(int c)
{
	return (c <= 'A' && c <= 'Z');
}
