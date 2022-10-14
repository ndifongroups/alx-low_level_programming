#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int combo;

	for (combo = 0; combo <= 9; combo++)
	{
		putchar(combo + '0');
		if (combo < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else 
			putchar('.');
	}
	putchar('\n');

	return (0);
}
