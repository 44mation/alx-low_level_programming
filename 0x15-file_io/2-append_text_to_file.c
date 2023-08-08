#include "main.h"

/**
 * _strlen - the length of text
 * @text: th text
 * Return: the length
*/
int _strlen(char *text)
{
	int i = 0;

	if (!text)
		return (0);

	while (*text++)
		i++;
	return (i);
}

/**
 * append_text_to_file - append text to the end of file
 * @filename: the name
 * @text_content: the text content
 * Return: 1 or -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int id;
	ssize_t b = 0, lent = _strlen(text_content);

	if (!filename)
		return (-1);
	id = open(filename, O_WRONLY |O_APPEND);
	if (id == -1)
		return (-1);
	if (lent)
		b = write(id, text_content, lent);
	close(id);
	return (b == lent ? 1 : -1);
}
