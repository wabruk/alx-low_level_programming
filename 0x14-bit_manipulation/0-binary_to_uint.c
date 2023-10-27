#include <stdio.h>
#include <main.h>

/**
 * binary_to_unit - function converts a binary number to an unsigned int.
 * @b: pionter to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error 
 */ 
unsigned int binary_to_unit(const char *b)
{
	int w;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0', a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}
	return (num);
}
