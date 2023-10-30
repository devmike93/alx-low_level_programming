#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a text file nad prints it
 * to the POSIX standard input
 * @filename: text file being read
 * @letters: number of letters read and printed
 * Return: actual number of letters read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t file_dis;
	ssize_t wrt;
	ssize_t rd;

	file_dis = open(filename, O_RDONLY);
	if (file_dis == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	rd = read(file_dis, str, letters);
	wrt = write(STDOUT_FILENO, str, rd);

	free(str);
	close(file_dis);
	return (wrt);
}

