#include"main.h"

/**
 * print_alphabet -  a function that prints the alphabet, in lowercase
   * followed by a new line
    * Return:nothing
*/
void print_alphabet(void)
{
	int namu;

	for (namu = 'a'; namu <= 'z'; namu++)
	_putchar(namu);
	_putchar('\n');
}
