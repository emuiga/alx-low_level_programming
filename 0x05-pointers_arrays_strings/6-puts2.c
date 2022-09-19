#include "main.h"
#include <stdio.h>
/**
 * puts2 - function that prints every other character starting with the first
 * @str: the input
 * return: 0 if successful
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			putchar('\n');
			break;
		}
		if (count % 2 == 0)
		{
			putchar(str[count]);
			count++;
		}
	}
}
