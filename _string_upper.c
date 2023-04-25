#include <stdlib.h>
#include "main.h"

/**
 * _string_upper - Converts lowercase characters in a string to uppercase.
 * @str: char pointer to the string.
 *
 * Return: Void.
 */
void _string_upper(char *str)
{
int i;

i = 0;
while (str[i])
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
i++;
}
}
