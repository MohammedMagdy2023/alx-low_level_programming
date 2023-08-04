#include <stdio.h>

/**
* main - prints the number of arguments
*@argc: number of arguments
*@argv:array of arguments
*Return: the number of arguments
*/

int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}
