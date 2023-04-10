#include "main.h"
/**
 * append_text_to_file - append a text file
 *
 * @filename: the filename to append to the file path
 * @text_content: the text to append to the file path
 *
 * Return: the string to append to the file path
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, err, len;
fd = err = len = 0;
if (!filename)
return (-1);
else if (!text_content || !text_content[0])
return (1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd < 0)
return (-1);
while (text_content[len])
len++;
err = write(fd, text_content, len);
if (err < 0)
return (-1);
close(fd);
return (1);
}
