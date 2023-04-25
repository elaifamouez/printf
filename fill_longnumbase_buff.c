#include "main.h"
#include <stdlib.h>

/**
 * fill_longnumbase_buff - fills buffer with correct numbers up to base 36
 * @num: long int to convert to string of given base
 * @base: base of number used in conversion, only works up to base 36
 * @buff: buffer to fill with result of conversion, not main printf buffer
 * @buff_size: size of buffer in bytes
 *
 * Return: always void.
 */
void fill_longnumbase_buff(unsigned long int num, unsigned int base,
				char *buff, int buff_size)
{
int rem, i = buff_size - 1;

buff[buff_size] = '\0';
while (i >= 0)
{
rem = num % (unsigned long int)base;
if (rem > 9)
buff[i] = rem + 87;
else
buff[i] = rem + '0';
num /= (unsigned long int)base;
i--;
}
}
