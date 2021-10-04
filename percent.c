#include"main.h"
/**
 * print_percent - prints a percent symbol
 * @list: list of arguments
 * Return: will return the amount of characters printed
 */
int print_percent(__attribute__((unused))va_list list)
{
	_write_char('%');
	return (1);
}
