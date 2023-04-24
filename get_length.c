#include <stdlib.h>
#include "main.h"

/**
 * get_length - extract length field after %
 * @s: string to extract from
 * @pos: position to start extractong from (will be modified to mark
 * end of search position)
 *
 * Return: string of 'l's and 'h's or NULL if not found
 */
char *get_length(const char *s, unsigned int *pos)
{
char *length_arr = "hl";
char *res_length = NULL;
int i, found;
size_t size = 1;

do {
found = 0;
i = 0;
while (length_arr[i] && !found)
{
if (s[(*pos) + 1] == length_arr[i])
{
size += sizeof(char);
res_length = _realloc(res_length, size - sizeof(char), size);
if (res_length == NULL)
{
free(res_length);
return (NULL);
}
res_length[size - 2] = s[(*pos) + 1];
found = 1;
(*pos)++;
}
i++;
}
} while (found);
if (res_length != NULL)
res_length[size - 1] = '\0';
return (res_length);
}
