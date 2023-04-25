#include "main.h"
#include <stdlib.h>

/**
 * get_rot - Gets the Rot13'd copy of the string
 * @args: va_list containing the string
 * @mods: length modifiers, voided, not used with this specifier
 *
 * Return: char pointer to newly allocated and rot13'd string
 */
char *get_rot(va_list args, char *mods)
{
int index, length;
unsigned char temp_c;
char is_upper;
char *str, *ret;

(void)mods;
str = va_arg(args, char *);
length = _strlen(str);
ret = malloc(length + 1);
if (!ret)
return (NULL);
index = 0;
while (str[index])
{
temp_c = (unsigned char)str[index];
if (_isalpha(temp_c))
{
is_upper = (temp_c >= 'A' && temp_c <= 'Z');
temp_c += 13;
if (is_upper)
{
if (temp_c > 'Z')
temp_c -= 26;
}
else
{
if (temp_c > 'z')
temp_c -= 26;
}
}
ret[index] = (char)temp_c;
index++;
}
ret[length] = '\0';
return (ret);
}
