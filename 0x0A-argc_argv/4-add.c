#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the addition of positive numbers,
 * followed by a new line.
 * @argc: The nummber of arguments passed to the program.
 * @argv: Aan array of the pointers to the arguments.
 * Return: If one of the numbers contain symbols that are non-digits -1.
 * otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Errot\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);

	return (0);
}
