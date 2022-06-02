#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: -1 if filename is NULL and 1 if successful
 */

int create_file(const char *filename, char *text_content)
{
	int fungua, andika, urefu = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (urefu = 0; text_content[urefu];)
			urefu++;
	}

	fungua = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	andika = write(fungua, text_content, urefu);

	if (fungua == -1 || andika == -1)
		return (-1);

	close(fungua);

	return (1);
}
