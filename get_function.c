#include "main.h"

/**
* get_function - retrieves the correct function
* @s: array to check
* Return: return a function (callback)
*/

int (*get_function(char s))(va_list)
{
	op_t ops[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{"b", print_b},
		{NULL, NULL }
	};

	int x;

	for (x = 0; ops[x].c != NULL; x++)
	{
		if (*ops[x].c == s)
			return (ops[x].f);
	}
	return (NULL);

}

