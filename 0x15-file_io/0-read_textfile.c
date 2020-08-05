#include "holberton.h"
/**
  * read_textfile - reads a text file and prints it to the POSIX
  * @filename: points to file that we will be receiving
  * @letters: size of letters to read in
  * Return: the readFile
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = 0, rFile = 0, wFile = 0, closeFile;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	rFile = read(file, buffer, letters);
	if (rFile == -1)
		return (0);
	wFile = write(STDOUT_FILENO, buffer, rFile);
	if (wFile == -1)
		return (0);
	closeFile = close(file);
	if (closeFile == -1)
		return (0);
	free(buffer);
	return (rFile);
}
