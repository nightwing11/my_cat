/*
** my_putchar.c for  in /Users/mouloudbenlalli/Google Drive/my_cat/benlal_m/my_cat
** 
** Made by BENLALI Mouloud
** Login   <benlal_m@etna-alternance.net>
** 
** Started on  Wed Dec 10 14:17:53 2014 BENLALI Mouloud
** Last update Wed Dec 10 14:18:33 2014 BENLALI Mouloud
*/
#include "my_lib.h"
void    my_putchar(char c)
{
	write(1, &c, 1);
}
