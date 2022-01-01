#include "ft_printf.h"
unsigned int unsignedIntLength(unsigned int num)
{
	if (num < 10)
		return (1);
	else
	{
		return (1 + unsignedIntLength(num / 10)); 
	}
}

unsigned int ft_putnbr_u(unsigned int num) //devuelve numero de cifras y encima hace el putnbr
{
	unsigned char aux;

	if(num < 10)
	{
		//printf("%u\n",num);
		aux = '0' + (unsigned char) num;
		write(1, &aux, 1);
		return (1);
	}
	else
	{
		//printf("%u\n",num);
		ft_putnbr_u(num / 10);
		ft_putnbr_u(num % 10);
		return (1 + unsignedIntLength(num / 10));
	}
}