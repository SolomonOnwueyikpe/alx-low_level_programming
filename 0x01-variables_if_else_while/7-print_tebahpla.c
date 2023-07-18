#include <stdio.h>
/**
 * main - my program entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	char p;

	for (p = 'z'; p >= 'a' ; p--)
		putchar(p);
	putchar('\n');
	return (0);
}
