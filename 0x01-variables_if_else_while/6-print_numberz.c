#include <stdio.h>
/**
 * main - my program entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	int p = 0;

	for (; p < 10 ; p++)
		putchar('0' + p);
	putchar('\n');
	return (0);
}
