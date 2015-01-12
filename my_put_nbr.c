/*
** my_put_nbr.c for  in /home/benlal_m/libmy_01/benlal_m
** 
** Made by BENLALLI mouloud
** Login   <benlal_m@etna-alternance.net>
** 
** Started on  Fri Oct 24 15:28:01 2014 BENLALLI mouloud
** Last update Fri Dec 12 17:23:01 2014 BENLALI Mouloud
*/
#include "my_lib.h"
void my_put_nbr(int nb)
{
	int neg;

	neg = 0;
	if (nb < 0)
	{
		my_putchar('-');
		if (nb == -2147483648)
		{
			neg = 1;
			nb++;
		}
		nb = nb * -1;
	}
	if (nb >= 10)
		my_put_nbr(nb / 10);
	if (neg == 1)
	{
		neg = 0;
		my_putchar(nb % 10 + '1');
	}
	else
		my_putchar(nb % 10 + '0');
}

























