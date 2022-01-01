#include "ft_printf.h"
unsigned int ft_putstr_mod(char * str)
{
	unsigned int i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6); //verificar pete cuando no se pasa cadena
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}