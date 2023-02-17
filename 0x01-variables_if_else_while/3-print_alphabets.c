#include <stdio.h>

/**
 * main- Entry point. Prints alphabet in lowercase and then in uppercase.
 * Return: Always 0 (success)
 */

int main(void)
{

	char ch = 'a';
	char ch_1 = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch_1 = 'A'; ch_1 <= 'Z'; ch_1++)
	{
		putchar(ch_1);
	}
	putchar('\n');
	return (0);
}
