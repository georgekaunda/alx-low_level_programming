#include <stdio.h>
/**
*main - prints nos from 0-9
*
*REturn: Always 0
*/
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
