#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *main - the entry poit of the programm
 *
 *Return:0
 */



int main(void)
{
	int n, ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ln = n % 10;
	if (ln > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ln);
	} else if (ln == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ln);
	} else if (ln < 6 && ln != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ln);
	}
	return (0);
}

