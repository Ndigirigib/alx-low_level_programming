#include "main.h"

/**
 * print_numbers - prints number 0 to 9 followed by new line.
 * Description: prints number 0 to 9 followed by new line.
 * return: 0
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
