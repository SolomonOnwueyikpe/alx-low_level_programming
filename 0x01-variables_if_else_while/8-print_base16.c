#include <stdio.h>
/**
 * main - my program entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	unsigned char p = '0';
	int m;

	for (m = 0; m < 10; m++)
	{
		putchar(p);
		p++;
	}
	p = '1';
	for (m = 0; m < 6; m++)
	{
		putchar('0' + p);
		p++;
	}
	putchar('\n');
	return (0);
}
