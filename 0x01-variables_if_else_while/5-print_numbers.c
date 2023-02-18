#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
