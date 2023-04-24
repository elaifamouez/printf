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
