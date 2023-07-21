#include <stdio.h>
/**
 * main - A program that prints all possible different combinations of three digits
 * Return: 0 (Success)
 */
int main(void)
{
	int ones = '0';
	int tens = 'o';
	int hundreds = '0';
	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = '0'; ones <= '9'; tens++)
		{
			if (!((ones == tens) || (tens == hundreds > tens)))
			{
				putchar(hundreds);
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && hundreds == '7' && tens == '8'))
				{
					putchar(',');
					putchar(' ');
				}
}
