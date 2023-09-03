#include <stdio.h>

/**
 *main - fuction that prints all single digits
 *
 *Return:0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10; i++)
	{
		putchar(i + '0');
		if (i == 9)
			continue;
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

