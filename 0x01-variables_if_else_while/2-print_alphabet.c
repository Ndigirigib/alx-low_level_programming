#include <stdio.h>
/**
 * main - entry point. Print alphabets in lowercase.
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
