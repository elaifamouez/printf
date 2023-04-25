#include "main.h"
#include <stdlib.h>

/**
 * get_int - gets a character pointer to new string containing int
 * @args: va_list to get integer from and create str
 * @mods: array containing length modifier bytes, representing t/f for l & h
 *
 * Return: character pointer to newly created string. NULL if malloc fails.
 */
char *get_int(va_list args, char *mods)
{
int num = 0, length = 0;
long num_l = 0;
unsigned int temp;
unsigned long int temp_l;
char *ret;

if (mods[0] > 0 && mods[1] == 0) /* l byte is lit, h is not */
{
num_l = va_arg(args, long int);
if (num_l < 0)
temp_l = -(unsigned long int)num_l;
else
temp_l = (unsigned long int)num_l;
length = get_longnumbase_len(temp_l, 10);
}
else /* short is same in this case as normal */
{
num = va_arg(args, int);
temp = _abs(num);
length = get_numbase_len(temp, 10);
}
if (num < 0 || num_l < 0)
length++; /* negative sign */
ret = malloc(length + 1); /* create new string */
if (!ret)
return (NULL);
if (mods[0] > 0 && mods[1] == 0)
fill_longnumbase_buff(temp_l, 10, ret, length);
else
fill_numbase_buff(temp, 10, ret, length);
if (num < 0 || num_l < 0)
ret[0] = '-';
return (ret);
}
