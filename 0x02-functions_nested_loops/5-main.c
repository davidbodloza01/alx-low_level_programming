#include "main.h"


/**
 * print_sign - check the code and print sign.
 * @n: number to be checked
 * Return: Always 1 positive, -1 negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
