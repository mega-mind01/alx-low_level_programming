#include "main.h"

char *create_buffer(char *file);
void close_file(int files);

/**
 * create_buffer - allocate memory for buffer
 * @file: file name
 *
 * Return: pointer to assigned buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - close open file
 * @files: pointer to file to be closed
 */

void close_file(int files)
{
	int close_f;

	close_f = close(files);

	if (close_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", files);
		exit(100);
	}
}

/**
 * main - copy txt from one file to another
 * @argc: count of args
 * @argv: array pointer to arg
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int src, dest, read_file, write_file;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	src = open(argv[1], O_RDONLY);
	read_file = read(src, buffer, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src == -1 || read_file == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_file = write(dest, buffer, read_file);
		if (dest == -1 || write_file == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_file = read(src, buffer, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_file > 0);

	free(buffer);
	close_file(src);
	close_file(dest);

	return (0);
}
