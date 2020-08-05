#include "holberton.h"
/**
  * read_textfile - reads a text file and prints it to the POSIX
  * @filename: points to file that we will be receiving
  * @letters: size of letters to read in
  * Return: rd_wr
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	int file = 0, rd_wr = 0;

	if (filename != NULL)
	{
		buffer = malloc(sizeof(char) * letters);
		file = open(filename, O_RDONLY);

		if (file != -1 && buffer != NULL)
		{
			rd_wr = read(file, buffer, letters);
			rd_wr = write(STDOUT_FILENO, buffer, rd_wr);
		}
		close(file);
		free(buffer);
	}
	return (rd_wr);
}
