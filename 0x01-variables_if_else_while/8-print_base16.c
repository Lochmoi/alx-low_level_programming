#include <stdio.h>
/**
* main - Entry point
* Return: Always 0
*/
int main(void)
{
	int a;
	char lettr;

	for (a = '0'; a <= '9'; a++)
	putchar(a);
	for (lettr = 'a'; lettr <= 'f'; lettr++)
	putchar(lettr);
	putchar('\n');
	return (0);
}
