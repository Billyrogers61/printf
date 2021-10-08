# Printf

## Summary
This is a very simple attempt at implementing a printf function that formats and prints data

## Description
The _printf() function writes output to stdout, the standard output stream.It then returns the count of printed characters when the function is successful and -1 when the function fails.

This function writes the output under the control of a format string that specifies how subsequent arguments are converted for output.

The format string is a character string, beginning and ending in its initial shift state, if any. The format string is composed of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments. Each conversion specification is introduced by the character %, and ends with a conversion specifier.

The available conversion specifiers are:
+ %c: Prints a single character.
+ %s: Prints a string of characters.
+ %d: Prints integers.
+ %i: Prints integers.
+ %b: Prints the binary representation of an unsigned decimal.
+ %u: Prints unsigned integers
+ %x: Prints the hexadecial representation of an unsigned decimal in lowercase letters
+ %X:Prints the hexadecial representation of an unsigned decimal in uppercase letters
+ %r: Prints a reversed string
+ %R: Prints the Rot13 interpretation of a string

## Usage
+ All the files are to be compiled on Ubuntu 14.04 LTS
+ Compile your code with `gcc -Wall -Werror -Wextra -pedantic *.c`
+ Include the "main.h" header file on the functions using the _printf()

## Example

```

#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
        int a;
        int b;
        char *str;

        str = "school";
        a = _printf("%r\n", "Attempt"); /*expected: tpmettA*/
        printf("--->%d\n", a); /*expected: 10*/

        b = _printf("%r\n", str); /*expected: loohcs*/