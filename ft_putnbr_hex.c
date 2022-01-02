#include "ft_printf.h"
//luego quitar length in hexa que no va aqui

unsigned int ft_putnbr_X(unsigned int num) //devuelve numero de cifras y encima hace el putnbr
{
	unsigned char aux; //que esto sea unsigned int

	if(num < 16)
	{
		//printf("%u\n",num);
		if (num < 10)
		{
			aux = '0' + (unsigned char) num; //hacer cast de esto a unsigned char
			write(1,&aux,1);
		}
		else if (num >= 10)
		{
			aux = 'A' + (unsigned char) num - 10;
			write(1, &aux, 1);
		}
		return (1);
	}
	else
	{
		//printf("%u\n",num);
		ft_putnbr_X(num / 16);
		ft_putnbr_X(num % 16);
		return (1 + lengthInHexadecimal(num / 16));
	}
}

unsigned int ft_putnbr_x(unsigned int num) //devuelve numero de cifras y encima hace el putnbr
{
	unsigned char aux; //que esto sea unsigned int
	
	if(num < 16)
	{
		//printf("%u\n",num);
		if (num < 10)
		{
			aux = '0' + (unsigned char) num; //hacer cast de esto a unsigned char
			write(1, &aux, 1);
		}
		else if (num >= 10)
		{
			aux = 'a' + (unsigned char) num - 10;
			write(1, &aux, 1);
		}
		return (1);
	}
	else
	{
		//printf("%u\n",num);
		ft_putnbr_x(num / 16);
		ft_putnbr_x(num % 16);
		return (1 + lengthInHexadecimal(num / 16));
	}
}


//aunque pone que devuelve un unsigned int, la funcion toHexa trabaja con long unsigned int para que sea válido para el del puntero
//por lo que se hace el cast solo de long unsigned int a unsigned int