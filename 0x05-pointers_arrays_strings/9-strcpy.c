#include "main.h"
#include <stdio.h>
/**
 * char *_strcpy - function that copies string pointed to the src
 * @dest: the one that's being copied to
 * @src: the one it is being copied from
 * return: def successful
 */
char *_strcpy (char *dest, char *src)
{
	int i = 0;

	for (i = 0, src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
