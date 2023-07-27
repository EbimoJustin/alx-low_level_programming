#include <stdio.h>
/**
 * main - A program that prints all the numbers of base sixteen in a lower case
 * Return: 0 (Success)
 */

int main(void)
{
	int num;
	char alphabet;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
