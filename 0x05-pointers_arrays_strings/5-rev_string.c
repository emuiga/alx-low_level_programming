#include "main.h"
#include <stdio.h>
/**
 * rev_string - function that reverses a string
 * @s: the value being considered
 * return: string in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int fcounter = 0;
	int i;

	while (s[fcounter] != '\0')
	{
		fcounter++;
	}
	for (i = 0; i < fcounter; i++)
	{
		fcounter--;
		rev = s[i];
		s[i] = s[fcounter];
		s[fcounter] = rev;
	}
}
