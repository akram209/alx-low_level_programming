#include "main.h"

/**
 * print_rev - print reversed string, followed by a new line.
 * @s: pointer to the string to print
 * Return: void
*/

void print_rev(char *s)
{
	int l, i;
	char temp;

	for (l = 0; s[l] != '\0'; ++l)
		;
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}

}
