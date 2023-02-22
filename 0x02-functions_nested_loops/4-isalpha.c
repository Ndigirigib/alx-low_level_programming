#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: is checked if it's a character
 * Return: If c is a character it returns 1, otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'));

}
