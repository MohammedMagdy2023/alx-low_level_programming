#include <stdio.h>

/***
 *main - prints alphabet in uppercase followed by a new line
 *
 *Return:0
 */

int main(void)
{
	int i;

	/*print alphabet in lowercase*/
	for (i = 97; i < 122; i++)
	{
		putchar(i);
	}
	/*Print alphabet in uppercase*/
	for (i = 65; i < 95; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return(0);
}

