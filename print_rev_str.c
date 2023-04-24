#include "main.h"

/**
 * print_rev_str - function that prints a str in reverse
 * @args: type struct va_arg where is allocated printf arguments
 * @f: flag struct
 * Return: the string
 */
int print_rev_str(va_list args, flags_t *f)
{
char *s = va_arg(args, char*);
int i;
int j = 0;

(void)f;
if (s == NULL)
s = "(null)";
while (s[j] != '\0')
j++;
for (i = j - 1; i >= 0; i--)
_putchar(s[i]);
return (j);
}
