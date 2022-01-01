#include "ft_printf.h"
size_t	ft_intlen(long nb)
{
	size_t	count;

	count = 0;
	if (nb == 0)
	{
		count++;
		return (count);
	}
	if (nb < 0)
	{
		nb = nb * -1;
		count++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*strnum;
	size_t	len;
	long	nb;

	nb = n;
	len = ft_intlen(nb);
	strnum = (char *)malloc(sizeof(char) * len + 1);
	if (!strnum)
		return (NULL);
	strnum[len--] = '\0';
	if (n == 0)
		strnum[0] = '0';
	if (nb < 0)
	{
		strnum[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		strnum[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (strnum);
}