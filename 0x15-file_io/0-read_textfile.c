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
	int f;
	ssize_t byte;
	char buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	byte = read(f, &buffer[0], letters);
	byte = write(STDOUT_FILENO, &buffer[0], byte);
	close(f);

	return (byte);
}

