#include "main.h"

/**
 *_isupper - checks if parameter is uppercase character
 *@c: input character
 *Return: 1 if is uppercase character, othewise return 0
 **/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
