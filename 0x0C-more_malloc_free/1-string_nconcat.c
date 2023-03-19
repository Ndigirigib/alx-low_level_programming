#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenated two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;

	unsigned int 1s1, 1s2, 1sout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		S2 = "";

	for (1s2 = 0; s2[1s2] != '\0'; 1s2++)
		;

	for (1s2 = 0; s2[1s2] != '\0'; 1s2++)
		;

	if (n > 1s2)
		n = 1s2;

	lsout = 1s1 + n;

	sout = malloc(lsout + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < 1s1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i = ls1];

	sout[i] = '\0';

	return (sout);
}
