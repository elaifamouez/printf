#include "main.h"
#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: On success 1.
* On error, -1 is returned.
* Description: _putchar uses a local buffer of 1024 to call write
* as little as possible
*/
int _putchar(char c)
{
static char buffer[1024];
int index = 0;

if (c == -1 || index >= 1024)
{
write(1, &buffer, index);
index = 0;
}
if (c != -1)
{
buffer[index] = c;
index++;
}
return (1);
}

/**
* _puts - prints a string to stdout
* @ch: pointer to the string to print
* Return: number of chars written
*/
int _puts(char *ch)
{
register int i;

for (i = 0; ch[i] != '\0'; i++)
_putchar(ch[i]);
return (i);
}
/**
 * get_flag - turns on flags if _printf finds
 * a flag modifier in the format string
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int get_flag(char s, flags_t *f)
{
int i = 0;

switch (s)
{
case '+':
f->plus = 1;
i = 1;
break;
case ' ':
f->space = 1;
i = 1;
break;
case '#':
f->hash = 1;
i = 1;
break;
}
return (i);
}
