#include "ft_printf.h"
#include <stdio.h>

int ft_printf(const char *str, ...)
{
	int	i;
	char	prefix;
	char	keys[4] = {'c', 'i', 'p', 'x'};
	prefix = '%';
	i = 0;
	while (str[i])
	{
		if (str[i] == prefix)
		{
			i++;
			if (str[i] == keys[0])
				printf("print caracter!\n");
			else if (str[i] == keys[1])
				printf("print intenger!\n");
			else if (str[i] == keys[2])
				printf("print pointer!\n");
			else if (str[i] == keys[3])
				printf("print hexadecimal!\n");
		}
		i++;
	}
	return (0);
}