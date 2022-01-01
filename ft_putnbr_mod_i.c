#include "ft_printf.h"
int ft_putnbr_mod_i(int num)//usamos itoa para pasar cadena y retornamos fr_putstr_mod así retornamos tb el menos
{//podemos llamar ft_putnbr_i
	char *str;
	str = ft_itoa(num);
	if (num < 0)
	{
		str++; //saltamos el signo de la cadena si es negativo
	}
	return(ft_putstr_mod(str));
}
//para %i