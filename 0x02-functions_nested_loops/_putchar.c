#include "main.h"
#include <unistd.h>
/**
 * _putchar writes  program c to be stdout
 *@c character to print
 * Return: on success 1
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

