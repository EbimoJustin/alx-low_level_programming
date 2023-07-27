#include <stdio.h>

/**
 * main - A program that prints alphabet in lowercase except e and q
 * Return: 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
		continue;
		putchar(alphabet);
	}

		putchar ('\n');

		return (0);
}
