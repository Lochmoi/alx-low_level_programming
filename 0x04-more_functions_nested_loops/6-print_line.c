#include "main.h"
/**
 *print_line -draws a straight line using a single charachter
 *@n: the of characters to be printed out on the terminal
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
	for (line = 0; line <= n; line++)
	{
	_putchar('_');
	}
	}
	_putchar('\n');
}


