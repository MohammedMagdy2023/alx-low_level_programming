#include <stdio.h>

/**
*main - prints all base16 nums
*
*Return:0
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

