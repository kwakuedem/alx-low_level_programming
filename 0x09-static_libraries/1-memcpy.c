#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	*(dest + num) =  *(src + num);

	return (dest);
}
