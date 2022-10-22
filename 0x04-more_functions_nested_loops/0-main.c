#include "math.h"
#include <stdio.h>
#include <ctype.h>
/**
 *  * main - check the code.
 *   *
 *    * Return: Always 0.
 *     *
 */

int _issupper(int c)
{
	    char c;

	        c = 'A';
		printf("%c: %d\n", c, _isupper(c));
		c = 'a';
		printf("%c: %d\n", c, _isupper(c));
		return (0);
}
