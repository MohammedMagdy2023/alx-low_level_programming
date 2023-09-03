#include <stdio.h>

/***
 *main - prints alphabet in uppercase followed by a new line
 *
 *Return:0
 */

int main(void)
{       
        int i;

        for (i = 97; i < 122; i++)
        {
            if (i == 101 || i == 113){
                continue;
            }else{
                putchar(i);
            }
        }
        /*Print alphabet in uppercase*/
        putchar('\n');
        return(0);
}

