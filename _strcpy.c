#include"main.h"

/**
 * _strcpy - copy string to another
 * @dest:dest
 * @src:source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
