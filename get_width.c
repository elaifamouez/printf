#include <stdlib.h>
#include "main.h"

/**
 * get_width - extract width field after %
 * @s: string to extract from
 * @pos: position to start searching from (will be modified to mark
 * end of searching position)
 *
 * Return: width integer or 0 for * or -1 if not found
 */
int get_width(const char *s, unsigned int *pos)
{
int res_width = -1, found;

if (s[(*pos) + 1] == '0')
return (-1);
if (s[(*pos) + 1] == '*')
{
(*pos)++;
return (0);
}
do {
found = 0;
if (s[(*pos) + 1] >= '0' && s[(*pos) + 1] <= '9')
{
if (res_width < 0)
res_width = s[(*pos) + 1] - '0';
else
{
res_width *= 10;
res_width += s[(*pos) + 1] - '0';
}
found = 1;
(*pos)++;
}
} while (found);
return (res_width);
}
