#include "main.h"

/**
 * _puts - print a string, followed by a new line, to stdout
 * @str: pointer to the string
 * Return: string and new line
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
