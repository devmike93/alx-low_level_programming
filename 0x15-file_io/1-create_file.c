#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails -1. Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_dis;
	int wrt;
	int length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file_dis = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(file_dis, text_content, length);

	if (file_dis == -1 || wrt == -1)
		return (-1);

	close(file_dis);

	return (1);
}

