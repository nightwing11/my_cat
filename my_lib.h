#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
void my_putstr(char *str);
void my_putchar(char c);
int open_verif (char *str, char *buffer);
void only_cat();
int my_strcmp(char *s1, char *s2);
void option_b(char *str );
void option_e(char *str);
void option_n(char *str);
void  my_put_nbr(int nb);
int gest_option(char **str);
void only_cat_b();
void only_cat_e();
void only_cat_n();
int verif_arg(char *ch);
