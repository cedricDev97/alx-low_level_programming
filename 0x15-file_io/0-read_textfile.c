#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, fread, fwrite;
	char *totalSize;

	totalSize = malloc(sizeof(char) * letters);
	if (totalSize == NULL)
		return (0);
	if (filename == NULL)
		return (0);


	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);
	fread = read(file, totalSize, letters);
	if (fread == -1)
		return (0);
	nwr = write(STDOUT_FILENO, totalSize, fread);
	if (fwrite == -1)
		return (0);

	close(file);

	free(totalSize);

	return (fwrite);
}
