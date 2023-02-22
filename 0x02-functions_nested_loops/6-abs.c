#include "main.h"
/**
 * _abs - computs absolute value of an integer.
 *  @c - integer to be computed.
 *  Return: Absolute value of a digit or zero.
 */
int _abs(int c)
{
	if (c < 0)
	{
		int absolute_v;

		absolute_v = c * -1;
		return (absolute_v);
	}
	return (c);
}
