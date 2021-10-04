#include "main.h"
/**
 * print_s - takes string and return string
 * @list: string
 * Return: string
 */
int print_s(va_list list)
{
	char *s;
	int i;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);
	return (i);

}
