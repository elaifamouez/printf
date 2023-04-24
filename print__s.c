#include "main.h"

/**
 *print__s - function to print string
 *@args: string to print
 *@f: flag struct
 *Return: number of characters to print
 */
int print__s(va_list args, flags_t *f)
{
int count;
char *str = va_arg(args, char *);

(void)f;
if (str == NULL)
str = "(null)";
for (count = 0; str[count] != '\0'; count++)
_putchar(str[count]);
return (count);
}
