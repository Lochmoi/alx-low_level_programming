#include"main.h"

/**
 * print_alphabet -  a function that prints the alphabet, in lowercase
   * followed by a new line
    * Return:nothing
*/
void print_alphabet(void)
{
	char namu;
	 namu = 'a';

	while (namu <= 'z')
	_putchar(namu);
	namu++;
	_putchar('\n');
}
