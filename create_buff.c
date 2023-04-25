#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * create_buff - creates a buffer in memory and sets to 0
 * @bytes: number of bytes to allocate for buffer
 *
 * Return: char pointer to beginning of buffer
 */
char *create_buff(unsigned int bytes)
{
char *new_buff;

new_buff = malloc(bytes);
if (!new_buff)
return (NULL);
return (new_buff);
}
