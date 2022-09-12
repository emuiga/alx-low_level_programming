#include <stdio.h>
int main(void)
{
	string alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for(i = 0; i < 26, i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
