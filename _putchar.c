#include "main.h"

/**
* _putchar - prints out a character to stdout
* @c: character to be printed
* Return: on success 1
* on failure return -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

