#include "math.h"
/**
  *  _islower - a function that checks for lowercase character.
   *  @c: An input character
    *  Return: 1 if c is lowercase, otherwise return 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
