#include <stdlib.h>
#include "main.h"

/**
 * get_specifier - extract specifier field after %
 * @s: string to extract from
 * @pos: position to start extractong from (will be modified to mark
 * end of search position)
 *
 * Return: specifier char or NULL if not found
 */
char get_specifier(const char *s, unsigned int *pos)
{
char *spec_arr = "cs%dibuoxXSprR";
int i;

for (i = 0; spec_arr[i]; i++)
{
if (spec_arr[i] == s[(*pos) + 1])
{
(*pos)++;
return (spec_arr[i]);
}
}
return (0);
}
