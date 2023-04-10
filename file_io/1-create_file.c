#include "main.h"
#include <sys/stat.h>
#include <unistd.h>
/**
 * create_file - create a file with the specified name and permissions
 *
 * @filename: the name of the file to read
 * @text_content: the content of the file to write
 *
 * Return: the newly created file object, NULL if the file could not be created
 */
int create_file(const char *filename, char *text_content)
{
int fd, length;
ssize_t nr_bytes;
if (!filename)
{
return (-1);
}
if (!text_content)
{
text_content = "";
}
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
{
return (-1);
}
length = 0;
while (text_content[length])
{
length++;
}
nr_bytes = write(fd, text_content, length);
if (nr_bytes == -1)
{
return (-1);
}
close(fd);
return (1);
}
