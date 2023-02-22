#include "main.h"
/*
 * _islower: Function checks for lower case character.
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
