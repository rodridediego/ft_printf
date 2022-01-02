#include "ft_printf.h"

int IntLength(int num)
{
	if (num < 10)
		return (1);
	else
	{
		return (1 + IntLength(num / 10)); 
	}
}
int ft_putnbr_mod_no_sing(int num) //devuelve numero de cifras y encima hace el putnbr
{
	unsigned char	aux;
	unsigned int	n;
	if (num < 0)
	{
		n = (unsigned int) num * (- 1);
		//write(1, "-", 1);
	}
	else
		n = (unsigned int) num;
	if(n < 10)
	{
		aux = '0' + (unsigned char) n;
		write(1, &aux, 1);
		return (1);
	}
	else
	{
		ft_putnbr_mod_no_sing(n / 10);
		ft_putnbr_mod_no_sing(n % 10);
		return (1 + IntLength(n / 10));
	}
}