#include "math.h"
/**
 * print_alphabet_x10 in lowercase - a function that prints 10 times alphabet,
 *in a new line on lowercase
 *return nothin
*/
void print_alphabet_x10(void)
{
	int count = 0;
	char alphabet;
	while (count++ <= 9)


	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
