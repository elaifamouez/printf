#include <stdlib.h>
#include "main.h"

/**
 * get_precision - extract precision field that starts with '.' and after %
 * @s: string to extract from
 * @pos: position to start extractong from (will be modified to mark
 * end of search position)
 *
 * Return: precision integer or -1 for '.*' or -2 if not found
 */
int get_precision(const char *s, unsigned int *pos)
{
int res_prec = 0, found;

if (s[(*pos) + 1] != '.')
return (-2);
(*pos)++;
if (s[(*pos) + 1] == '*')
{
(*pos)++;
return (-1);
}
do {
found = 0;
if (s[(*pos) + 1] >= '0' && s[(*pos) + 1] <= '9')
{
if (res_prec == 0 && s[(*pos) + 1] != '0')
res_prec = s[(*pos) + 1] - '0';
else if (res_prec > 0)
{
res_prec *= 10;
res_prec += s[(*pos) + 1] - '0';
}
found = 1;
(*pos)++;
}
} while (found);
return (res_prec);
}

