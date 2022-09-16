#include "holberton.h"

/**
 * _isdigit - checks for lowercase character.
 * @c: int to be checked
 * Return: 1 if c is uppercase
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
