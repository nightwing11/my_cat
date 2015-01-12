/*
** my_strcmp.c for  in /home/benlal_m/libmy_01/benlal_m
** 
** Made by BENLALLI mouloud
** Login   <benlal_m@etna-alternance.net>
** 
** Started on  Fri Oct 24 16:03:01 2014 BENLALLI mouloud
** Last update Fri Oct 24 16:04:59 2014 BENLALLI mouloud
*/
int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	a;

  a = 0;
  i = 0;
  while ((s1[i] != '\0') || (s2[i] != '\0') )

    {
      if ( s1[i] < s2[i] || s1[i] == '\0')
	{
	  return (a = -1);
	}
      else if (s1[i] > s2[i] || s2[i] =='\0')
	{
	  return (a = 1);
	}
      i++;
    }
  return (a);
}
