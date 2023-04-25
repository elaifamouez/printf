#include "main.h"
#include <stdlib.h>

/**
 * perform_flag_funcs - Perform flag functions that were encountered on the
 * string.
 * @flags: An array int to keep track of which flags were encountered. 1 if
 * encountered, otherwise 0.
 * @temp: The string to perform functions on.
 * @spec: The specifier.
 *
 * Return: char pointer to the formatted string.
 */
char *perform_flag_funcs(int *flags, char *temp, char spec)
{
int i;
char *(*f)(char *);

for (i = 0; i < 5; i++)
{
if (flags[i])
{
f = get_flag_func(i, spec);
if (f)
temp = f(temp);
if (!temp)
return (NULL);
}
}
return (temp);
}
