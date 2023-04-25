#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * copy_buff - copies a string into the buffer
 * @str: string to copy into buffer
 * @help_s: pointer to printh_t struct containing buffer, buff_i, etc..
 *
 * Return: number of bytes written
 */
unsigned int copy_buff(char *str, printh_t *help_s)
{
unsigned int i = 0;

if (!str || !help_s->buff)
return (0);
while (str[i] && help_s->buff_i < BUFF_SIZE)
{
help_s->buff[help_s->buff_i] = str[i];
help_s->buff_i++, i++;
if (help_s->buff_i == BUFF_SIZE)
{
print_buff(help_s->buff, BUFF_SIZE);
free(help_s->buff);
help_s->buff = create_buff(BUFF_SIZE);
if (!help_s->buff)
return (i);
help_s->buff_i = 0;
}
}
if (help_s->c != str) /* addresses */
free(str);
return (i);
}
