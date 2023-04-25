#include "main.h"
#include <stdlib.h>

/**
 * insert_null_char - Inserts a nullbyte into the buffer while applying width
 * or left adjustment.
 * @help_s: pointer to the structure containing width and precision values.
 *
 * Return: void.
 */
void insert_null_char(printh_t *help_s)
{
int i, shift_flag, width;

shift_flag = help_s->flags[3];
width = help_s->width;
if (shift_flag)
{
help_s->buff[help_s->buff_i++] = '\0';
help_s->buff_len++;
for (i = 0; i < width - 1; i++)
{
help_s->buff[help_s->buff_i++] = ' ';
help_s->buff_len++;
}
}
else
{
for (i = 0; i < width - 1; i++)
{
help_s->buff[help_s->buff_i++] = ' ';
help_s->buff_len++;
}
help_s->buff[help_s->buff_i++] = '\0';
help_s->buff_len++;
}
}
