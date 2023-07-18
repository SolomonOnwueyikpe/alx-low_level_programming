#include <stdio.h>
/**
 * main - my programm entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	char p;

	for (p = 'a'; p <= 'z' ; p++)
	{
		if (p == 'q' || p == 'e')
		{
			continue;
		}
		putchar(p);
	}
	putchar('\n');
	return (0);
}
