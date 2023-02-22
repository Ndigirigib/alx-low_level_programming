#include "main.h"
/**
 * print_alphabet - the function prints alphabet in lowercase
 * Description: Prints alphabet in lowercase followed by new line
 * Return: void
 */


void print_alphabet(void)
{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
