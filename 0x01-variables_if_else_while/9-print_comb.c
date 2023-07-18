#include <stdio.h>
/**
 * main - my program entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	int m;
	for (m = 11; m < 20; m++)
	{
		putchar((m % 10) + '0');
		if (m != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
