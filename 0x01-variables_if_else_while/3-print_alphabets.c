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

	for (p = 'a'; p <= 'z' ; p++)
		putchar(p);
	for (p = 'A'; p <= 'Z'; p++)
		putchar(p);
	putchar('\n');
	return (0);
}
