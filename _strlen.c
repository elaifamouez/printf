#include <stdlib.h>
#include "main.h"

/**
 * _strlen - gets length of string, not including null byte
 * @str: string to get length of
 *
 * Return: length of string
 */
int _strlen(char *str)
{
int i = 0;

while (*(str + i))
i++;
return (i);
}
