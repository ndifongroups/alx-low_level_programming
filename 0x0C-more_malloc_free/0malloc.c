#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(sizeof(b));
	if (i == NULL)
		exit (98);

	return (i);
}
