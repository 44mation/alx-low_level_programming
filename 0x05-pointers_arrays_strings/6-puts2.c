#include "main.h"
/**
 * puts2 - fct prints a sting
 * @str: the string
*/

void puts2(char *str)
{
        while (*str != '\0')
                _putchar(*(str + 2));

        _putchar('\n');
}
