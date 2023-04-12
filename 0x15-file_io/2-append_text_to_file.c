#include "main.h"

/**
 * append_text_to_file - appends text
 * @filename: filename.
 * @text_content: content
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int alx;
	int n;
	int r;

	if (!filename)
		return (-1);

	alx = open(filename, O_WRONLY | O_APPEND);

	if (alx == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++);

		r = write(alx, text_content, n);

		if (r == -1)
			return (-1);
	}

	close(alx);

	return (1);
}
