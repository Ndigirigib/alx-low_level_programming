#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char sm = 'a';
	while (sm <= 'z')
	{
		if (sm == 'e'|| sm == 'q')
		{
			sm++;
			continue;
		}
		putchar(sm);
		sm++;
	}
	putchar('\n');
	return (0);
}
