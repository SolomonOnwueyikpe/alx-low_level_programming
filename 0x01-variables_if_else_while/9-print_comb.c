#include <stdio.h>
/**
 * main - e my program ntry point
 *
 * Return: 0
 *
 */
int main(void)
{
        int m;

        for (m = 10; m < 20; m++)
        {
                putchar((m % 10) + '0');
                if (m != 19)
                {
                        putchar(',');
                        putchar(' ');
                }
        }
        putchar('\n');
        return (0);
}
