#include <stdio.h>
#include <time.h>
/*more header goes there */

/*betty style doc for funtion main goes there*/
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */
  return (0);
}
