#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/* helper functions*/
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void write_base(char *str);
char *rev_string(char *s);
unsigned int base_len(unsigned int num, int base);
char *_memcpy(char *dest, char *src, unsigned int n);

/*Printf functions*/
int _printf(const char *format, ...);
int print_s(va_list list);
int print_c(va_list list);
int _write_char(char c);
int print_percent(__attribute__((unused))va_list list);
int print_binary(va_list list);
int print_integer(va_list);
int print_number(va_list args);
int parser(const char *format, conver_t f_list[], va_list arg_list);
int print_unsgined_number(unsigned int n);





#endif /* MAIN_H */
