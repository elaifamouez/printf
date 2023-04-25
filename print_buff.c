#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * print_buff - prints the contents of the buffer
 * @buff: buffer to print
 * @buff_size: size of buffer in bytes
 *
 * Return: number of bytes written
 */
unsigned int print_buff(char *buff, unsigned int buff_size)
{
unsigned int bytes_written;

bytes_written = write(1, buff, buff_size);
return (bytes_written);
}
