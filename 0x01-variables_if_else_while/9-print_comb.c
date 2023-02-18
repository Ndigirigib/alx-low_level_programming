#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char x = '0';
	char cm = ',';

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		putchar(cm);
	}
	putchar('\n');
	return (0);
}
