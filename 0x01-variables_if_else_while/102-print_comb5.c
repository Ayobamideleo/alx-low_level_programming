#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			/* Print first two-digit number */
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');

			/* Print second two-digit number */
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			/* Print comma and space if not last combination */
			if (i != 99 || j != 99)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}

	return (0);
}
