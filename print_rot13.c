#include "main.h"

/**
 * print_rot13 - convert ROT13 to text
 * @args: argument
 * @f: flag struct
 * Return: number of characters to be print
 */
int print_rot13(va_list args, flags_t *f)
{
char ch[]  = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char chs[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
unsigned int i = 0, j = 0;
int s;
char *str;

(void)f;

s = 0;
str = va_arg(args, char *);
if (str == NULL)
str = "(NULL)";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; ch[j] != '\0'; j++)
{
if (ch[j] == str[i])
{
_putchar(chs[j]);
s++;
break;
}
}
if (ch[j] == '\0')
{
_putchar(str[i]);
s++;
}
}
return (s);
}
