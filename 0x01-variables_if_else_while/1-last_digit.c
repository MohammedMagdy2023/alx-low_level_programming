#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - entry point of programs
*
*Return: return 0
*/
int main(void)
{
int n;
int ln;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (ln > 5)
{
printf("Last digit of n is %d and is greater than 5\n", ln);
}
else if (ln == 0)
{
printf("Last digit of n is %d and is 0\n", ln);
}
else if (ln < 0 & ln != 0)
{
printf("Last digit of n is %d and is less than 6 and not 0\n", ln);
}
return (0);
}
