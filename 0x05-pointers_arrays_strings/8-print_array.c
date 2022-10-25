#include "main.h"
#include <stdio.h>
/**
* print_array - unction that prints n elements of an array of integer
* @a: pointer to first int
* @n: pointer to second int
* Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
