#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - ...
 * @ptr: ...
 * @old_size: ...
 * @new_size: ...
 *  Return: ...
 */

void *_realoc(void *ptr, unsigned in old_size, unsigned in new_size)

{
char *ptr
unsigned int i;

if (new_size == old size)
return (ptr);
if (ptr == NULL)
{
nptr = malloc(new_size);

if (nptr == NULL)
return (NULL);
return (nptr);
}
else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
}

nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);

for (i = 0; i < old_size && i < new_size; i++)
{
nptr [i] = ((char *) ptr)[i];
}

free(ptr);
return (nptr);
}

