#include <stdio.h>
/**
 * main - A program that prints alphabet in uppercase and lowercase
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'z') {
			putchar(d);
		}
	putchar('\n');
	return (0);
}
