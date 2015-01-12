/*
** open_verif.c for  in /Users/mouloudbenlalli/Google Drive/my_cat/benlal_m/my_cat
** 
** Made by BENLALI Mouloud
** Login   <benlal_m@etna-alternance.net>
** 
** Started on  Wed Dec 10 09:19:47 2014 BENLALI Mouloud
** Last update Mon Dec 15 09:41:04 2014 BENLALI Mouloud
*/
#include"my_lib.h"
int open_verif(char *str, char *buffer)
{
	int fic;
	fic = open(str,O_RDONLY);
	if(fic == -1)
	{
		my_putstr("cat: ");
		my_putstr(str);
		my_putstr(":");
		perror("");
		close(fic);
		return(1);
	}
	if(read(fic,buffer,sizeof(buffer)) == -1)
	{
		my_putstr("cat: ");
		my_putstr(str);
		my_putstr(":");
		perror("");
		close(fic);
		return(1);
	}
	return(0);
}

void only_cat()
{
  char buffer[30000];
  int nb;
  
	while ((nb = read(0, buffer, 30000)) > 0)
	  {
	    write (1, buffer, nb);
	  }
}
void only_cat_b()
{
  char tmp[30000];
  int cpt;
	int nb;
	
	cpt = 1;
	while ((nb = read(0, tmp, 30000)) > 0)
	{
		if(tmp[0] != '\n')
		{
			my_putstr(" ");
			my_put_nbr(cpt);
			my_putstr(" ");
			write(1,tmp,nb);
			cpt = cpt + 1;
		}
	}
}
void only_cat_e()
{
	char tmp[30000];
	int i;
	int nb;
	
	i = 0;
	while((nb = read(0, tmp, 30000)) > 0) 
	{
		
		while(tmp[i] != '\0')
		{
			if(tmp[i] == '\n')
			{
				my_putstr("$");
			}
			my_putchar(tmp[i]);
			i++;
		}
	}	
}
void only_cat_n()
{
	char tmp[30000];
	int nb;
	int cpt;
	
	cpt = 1;
	while ((nb = read(0, tmp, 30000)) > 0)
	{
		my_putstr(" ");
		my_put_nbr(cpt);
		my_putstr(" ");
		write(1,tmp,nb);
		cpt = cpt + 1;
	}
	
}
