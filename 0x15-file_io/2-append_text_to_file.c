#include "main.h"

/**
 * append_text_to_file - appends a text to a file
 *
 * @filename: pointer to the text file to append
 * @text_content: additional string input
 *
 * Return: as set
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int write_file;
	int count;

	if (text_content != NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	write_file = write(file, text_content, count);

	if (file == -1 || write_file == -1)
		return (-1);

	close(file);

	return (1);
}
