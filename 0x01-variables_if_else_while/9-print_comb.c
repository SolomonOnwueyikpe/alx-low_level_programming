#include <stdio.h>
/**
 * main -my program  entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	int n;

	for (n = 18; n < 27; n++)
	{
		putchar(n);
		if (n != 26)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
