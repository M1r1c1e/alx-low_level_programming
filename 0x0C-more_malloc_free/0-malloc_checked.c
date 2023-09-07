
#include <stdlib.h>

#include "main.h"


/**
 * *malloc_checked - allocating memory using malloc
 * @b: the number of memory to allocate
 *
 * Return: to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ctr;


	ctr = malloc(b);


	if (ctr == NULL)

	exit(98);


	return (ctr);

}




