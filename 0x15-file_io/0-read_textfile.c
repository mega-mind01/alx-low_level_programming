#include "main.h"

/**
 * read_textfile - reads a txt file
 *
 * @filename: pointer to txt file
 * @letters: word count in txt file
 *
 * Return: num of bytes printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file;
	ssize_t write_file;
	ssize_t read_file;
	char *buffer;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	read_file = read(file, buffer, letters);
	write_file = write(STDOUT_FILENO, buffer, read_file);

	free(buffer);
	close(file);

	return (write_file);
}
