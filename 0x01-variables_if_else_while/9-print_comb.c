#include <stdio.h>

/**
 * main - main function
 * Description: Print numbers 0 - 5
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
