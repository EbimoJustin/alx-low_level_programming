#include <stdio.h>
/**
 * main - A program that prints alphabet in uppercase and lowercase
 * Return: 0 (Success)
 */

int main(void)
{
	int c;

	int d;

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
			d++;
		}
	putchar('\n');
	return (0);
}
