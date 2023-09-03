#include <stdio.h>

/**
 * main - a function that prints alphabet followed by a new line
 *
 * Return:0
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

