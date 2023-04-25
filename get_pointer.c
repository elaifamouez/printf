#include "main.h"
#include <stdlib.h>

/**
 * get_pointer - gets a string that contains an address in hexadecimals.
 * @args: va_list to get hexadecimal from.
 * @mods: length modifiers, voided, not used with this specifier
 *
 * Return: char pointer to the string. NULL if malloc fails.
 */
char *get_pointer(va_list args, char *mods)
{
int length, i;
unsigned long int addr, temp, rem;
char *ret;

(void)mods;
addr = va_arg(args, unsigned long int);
length = 1;
temp = addr;
if (addr == 0)
{
ret = malloc(5 + 1);
ret = _strcpy(ret, "(nil)");
return (ret);
}
while (temp > 15)
{
temp /= 16;
length++;
}
ret = malloc(length + 1);
if (!ret)
return (NULL);
ret[length] = '\0';
i = length - 1;
while (i >= 0)
{
rem = addr % 16;
if (rem > 9)
ret[i] = rem + 87;
else
ret[i] = rem + '0';
addr /= 16;
i--;
}
return (ret);
}
