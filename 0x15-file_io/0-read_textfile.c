#include "main.h"

/**
 *read_textfile - read a text file and print it to stout
 *
 *@filename: pointer to file 
 *@letters: number os bytes 
 *
 *Return: number of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t f, rd, wt;
char *buf;

if (filename == NULL)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf ==  NULL)
return (0);

f = open(filename, O_RDONLY);
rd = read(f, buf, letters);
wt = write(STDOUT_FILENO, buf, rd);

if (f == -1 || rd == -1 || wt == -1 || wt != rd)
{
free(buf);
return (0);
}

free(buf);
close(o);

return (wt);

}
