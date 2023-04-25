#define NULL 0
#include "main.h"

/**
  * ch_in_array - Checks if the character is in the array.
  * @c: The character passed.
  * @ptr: Pointer to the array.
  *
  * Return: 1 if the character is in the array, 0 otherwise.
  */
int ch_in_array(char c, char *ptr)
{
int i = 0;

while (ptr[i])
{
if (ptr[i] == c)
return (1);
i++;
}
return (0);
}

