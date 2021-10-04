#include "main.h"
/**
 * print_c - returns char as string
 * @list: char
 * Return: String version of char
 */
int print_c(va_list list)
{
	_write_char(va_arg(list, int));
	return (1);
}
