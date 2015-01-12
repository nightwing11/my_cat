
/*
** option.c for  in /Users/mouloudbenlalli/Google Drive/my_cat/benlal_m/my_cat
** 
** Made by BENLALI Mouloud
** Login   <benlal_m@etna-alternance.net>
** 
** Started on  Wed Dec 10 17:53:36 2014 BENLALI Mouloud
** Last update Sun Dec 14 19:13:11 2014 BENLALI Mouloud
*/
#include "my_lib.h"
void option_b(char *str )
{
	char tmp[30000];
	int d;
	int i;
	int cpt;
	
	i = 0;
	cpt = 1;
	if(open_verif(str,tmp) == 0)
	{
	    d = open(str,O_RDONLY);
	    read(d,tmp,30000);
	    if(tmp[0] == '\n') 
			cpt = cpt -1;
	    else 
	    {  
			my_putchar(' ');
			my_put_nbr(1);
			my_putchar(' ');
		}
	    while(tmp[i] != '\0')
		{
			my_putchar(tmp[i]);
			if (tmp[i] == '\n')
			{
				cpt = cpt + 1;
				my_putchar(' ');
			  if(tmp[i+1] == '\n')
		      {
				  cpt = cpt - 1;
		      }	
			  if(tmp[i+1] != '\0' && tmp[i+1] != '\n' )
			  {
				  my_put_nbr(cpt);
				my_putchar(' ');
			  }
			}
			i++;
		} 
	  }
}
void option_e(char *str)
{
	char tmp[30000];
	int d;
	int i;
	
	i = 0;
	if(open_verif(str,tmp) == 0)
	{
		d = open(str,O_RDONLY);
		read(d,tmp,30000);
      while(tmp[i] != '\0')
	  {
		  if (tmp[i] == '\n')
		  {
			  my_putchar('$');
		  }
		  my_putchar(tmp[i]);
		  i++;
	  }
    }
}
void option_n(char *str)
{
	char tmp[30000];
	int d;
	int i;
	int cpt;
	
  i = 0;
  cpt = 1;
  if(open_verif(str,tmp) == 0)
  {
	  d = open(str,O_RDONLY);
      read(d,tmp,30000);
      my_putchar(' ');
      my_put_nbr(1);
      my_putchar(' ');
      while(tmp[i] != '\0')
	  {
		  my_putchar(tmp[i]);
		  if (tmp[i] == '\n')
		  {
			  cpt = cpt + 1;
			  my_putchar(' ');
			  if(tmp[i+1] != '\0' )
			  {
				  my_put_nbr(cpt);
				  my_putchar(' ');
			  }
		  }
		  i++;
	  }
  }	
}
void option_b_e(char *str )
{
	char tmp[30000];
	int d;
	int i;
	int cpt;
	
	i = 0;
	cpt = 1;
	if(open_verif(str,tmp) == 0)
	{
		d = open(str,O_RDONLY);
		read(d,tmp,30000);
		if(tmp[0] == '\n') 
			  cpt = cpt -1;
		else 
		{  
			my_putchar(' ');
			my_put_nbr(1);
			my_putchar(' ');
	      }
		while(tmp[i] != '\0')
		{
			if (tmp[i] == '\n')
			{
				my_putchar('$');
			  }
			my_putchar(tmp[i]);
			if (tmp[i] == '\n')
			{
				cpt = cpt + 1;
				  my_putchar(' ');
				  if(tmp[i+1] == '\n')
				  {
					  cpt = cpt - 1;
				  }	
				  if(tmp[i+1] != '\0' && tmp[i+1] != '\n' )
				  {
					  my_put_nbr(cpt);
					  my_putchar(' ');
				  }
			}
			i++;
		} 
	  }
}
void option_b_n(char *str )
{
	char tmp[30000];
	int d;
	int i;
	int cpt;
	
	i = 0;
	cpt = 1;
	if(open_verif(str,tmp) == 0)
	{
		d = open(str,O_RDONLY);
		read(d,tmp,30000);
		if(tmp[0] == '\n') 
			cpt = cpt -1;
		else 
		{  
			my_putchar(' ');
			my_put_nbr(1);
			my_putchar(' ');
		}
		while(tmp[i] != '\0')
		{
			  if (tmp[i] == '\n')
			  {
				  my_putchar('$');
			  }
			  my_putchar(tmp[i]);
			  if (tmp[i] == '\n')
			  {
				  cpt = cpt + 1;
				  my_putchar(' ');
				  if(tmp[i+1] != '\0')
				  {
					  my_put_nbr(cpt);
					  my_putchar(' ');
				  }
			  }
			  i++;
		} 
	}
}

int gest_option(char **str)
{
  if((my_strcmp(str[1],"-b") == 0 && my_strcmp(str[2],"-e") == 0) || (my_strcmp(str[2],"-b") == 0 && my_strcmp(str[1],"-e") == 0))
  {
      if(str[3] == NULL)
	  {
		  my_putstr("Usage: ./cat -option1 & -option2 fichier\n");
	  return 1;
	  }
      else 
		  option_b_e(str[3]);
  }
  else if((my_strcmp(str[1],"-n") == 0 && my_strcmp(str[2],"-e") == 0) || (my_strcmp(str[2],"-e") == 0 && my_strcmp(str[1],"-b") == 0))
  {	  
      if(str[3] == NULL)
	  { 
      	  my_putstr("Usage: ./cat -option1 & -option2 fichier\n");
		  return 1;
	  }
      else 
		  option_b_e(str[3]);
  }   
  else if(my_strcmp(str[1],"-b") == 0 && verif_arg(str[2]) == 0 )
	  option_b(str[2]);
  else if(my_strcmp(str[1],"-e") == 0 && verif_arg(str[2]) == 0 )
	  option_e(str[2]);
  else if(my_strcmp(str[1],"-n") == 0 && verif_arg(str[2]) == 0)
	  option_n(str[2]);
  else
  {
	  my_putstr("cat:option non valide\n");
	  my_putstr("Saisissez << ./cat --help >> pour plus d'information\n");
  }
  
  return 0;  
}
