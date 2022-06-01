#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != 0)
	{
		letters = 0;
		while (text_content[letters])
			letters++;
		wr = write(fd, text_content, letters);

		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
