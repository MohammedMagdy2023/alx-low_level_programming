#include <stdio.h>

/**
* main - prints program name
*@argc: number of arguments
*@argv: array of arguments
*Return: 0
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%d", argc - 1);

	return (0);
}
