#include "main.h"
/**
 * string_toupper - change lowercase letters to uppercase
 * @str:string
 * Return: 0 (success)
 */
char *string_toupper(char *str)
{

	int y;

	y = 0;

	while (*(str + y))
	{
		if (*(str + y) >= 'a' && *(str + y) <= 'z')
			*(str + y) -= 'a' - 'A';
		y++;
	}
	return (str);

