#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size, in bytes, of the allocated space of ptr.
 * @new_size: new size, in bytes, of the new memory block.
 *
 * Return: ptr.
 * if new_size == old_size, returns ptr without changes.
 * if malloc fails, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	else if (new_size != old_size)
	{
	void *new_ptr = malloc(new_size);

		if (new_ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}

		if (new_size < old_size)
		{
			old_size = new_size;
		}

		for (unsigned int i = 0; i < old_size; i++)
		{
			((char *)new_ptr)[i] = ((char *)ptr)[i];
		}

		free(ptr);
		ptr = new_ptr;
	}

	return (ptr);
	/*devmike*/
}
