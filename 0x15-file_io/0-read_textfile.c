#include "main.h"

/**
 * read_textfile - this reads a text file and prints the letters
 * @filename: filename.
 * @letters: this are numbers of letters printed.
 *
 * Return: numbers of the letters printed. It this fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int tj;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	tj = open(filename, O_RDONLY);

	if (tj == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(tj, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(tj);

	free(buf);

	return (nwr);
}
