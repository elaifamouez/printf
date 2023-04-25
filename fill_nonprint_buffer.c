#include <stdlib.h>
#include "main.h"

/**
 * fill_nonprint_buffer - fills a buffer with given string, replacing nonprints
 * @length: length of buffer in bytes
 * @buff: char pointer to buffer in memory
 * @str: char pointer to string to copy into buffer in memory
 *
 * Return: 1 on success, 0 on malloc failure of hexvalue for nonprints
 */
int fill_nonprint_buffer(int length, char *buff, char *str)
{
int i, j;
char *hex_val;

i = 0, j = 0;
while (i < length)
{
if (!is_printable(str[j]) && str[j] > 0)
{
hex_val = get_hex_n((unsigned int)str[j]);
if (!hex_val)
return (0);
buff[i++] = '\\';
buff[i++] = 'x';
_string_upper(hex_val);
if (hex_val[1])
{
buff[i++] = hex_val[0];
buff[i++] = hex_val[1];
}
else
{
buff[i++] = '0';
buff[i++] = hex_val[0];
}
free(hex_val);
}
else
{
buff[i] = str[j];
i++;
}
j++;
}
buff[length] = '\0';
return (1);
}
