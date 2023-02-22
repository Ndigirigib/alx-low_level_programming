#include "main.h"

/*
 *print_alphabet_x10: Prints alphabet
 *
 * Description: prints 10 times the alphabet, in lowercase and a new line.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x = 1;
	char ch = 'a';

	for (x = 1; x <= 10; x++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}
