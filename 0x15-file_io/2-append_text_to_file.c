#include "main.h"

/**
 * append_text_to_file - this appends text at the end of a file
 * @filename: filename.
 * @text_content: the added content.
 *
 * Return: 1 if this file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int tj;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	tj = open(filename, O_WRONLY | O_APPEND);

	if (tj == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(tj, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(tj);

	return (1);
}
