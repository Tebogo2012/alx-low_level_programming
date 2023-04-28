#include "main.h"

/**
 * _isupper - checks if the character is uppercase
 * @c:  input charecter
 * Return: 1 if uppercase character 0 if not
 */
int _isupper(int c)
{
	if (c >= 65  && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
