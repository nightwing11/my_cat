/*
** my_cat.c for  in /Users/mouloudbenlalli/Google Drive/my_cat/benlal_m/my_cat
** 
** Made by BENLALI Mouloud
** Login   <benlal_m@etna-alternance.net>
** 
** Started on  Wed Dec 10 16:14:55 2014 BENLALI Mouloud
** Last update Sun Dec 14 17:15:31 2014 BENLALI Mouloud
*/
#include "my_lib.h"
void  read_fic(int d,char *tmp)
{
	int  byte_read;
	
	byte_read=read(d,tmp,30000);
	while(byte_read > 0)
	{
		my_putstr(tmp);
		byte_read=read(d,tmp,30000);		 	
	}
}
int verif_arg(char *ch)
{
	if(ch[0] =='-')
		return 1;
	else
		return 0;	
}
int main(int argc, char **argv)
{
	int d;
	int i;
	char tmp[30000]; 
	if(argc < 2 || my_strcmp(argv[1],"-") == 0 )
		only_cat();
	if (argc < 3 && verif_arg(argv[1]) == 1) 
	{
		if(my_strcmp(argv[1],"-b") == 0)
			only_cat_b();
		else if(my_strcmp(argv[1],"-e") == 0)
		  only_cat_e();
		else if(my_strcmp(argv[1],"-n") == 0)
			only_cat_n();
		else if(my_strcmp(argv[1],"--help") == 0)
		{
			my_putstr("./cat -options... (./cat -b -e ou ./cat -n -e) fichier\n");
			my_putstr("options:\n -b:Numéroter en sortie les lignes non blanches, en commençant à 1\n -n:Numéroter les lignes en sortie, en commençant à 1.\n -e:$ en fin de ligne.\n ");
		}
		else
		{
			my_putstr("cat:option non valide\n");
			my_putstr("Saisissez << ./cat --help >> pour plus d'information\n");
		}
	}
	else if(argc >= 3)
		gest_option(argv);
	else 
	{
		for(i = 1; i < argc; i++)	
		{
			if(open_verif(argv[i],tmp) == 0)
			{
				d = open(argv[i],O_RDONLY);
				read_fic(d,tmp);
			}  
		}
		close(d);
	}
	return(0);
}
