#include <stdio.h>
/**
 * main - A program that prints all the numbers of base sixteen in a lower case
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	int d;

	c = 'a';
	d = '0';
	while
		(d < 17) {
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
