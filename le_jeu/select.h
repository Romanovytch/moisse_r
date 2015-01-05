/*
** select.h for select in /home/moisse_r/rendu/PSU_2014_my_select
**
** Made by Raphael Moisset
** Login   <moisse_r@epitech.net>
**
** Started on  Mon Jan  5 10:28:35 2015 Raphael Moisset
** Last update Mon Jan  5 15:20:23 2015 Raphael Moisset
*/

#ifndef SELECT_H_
# define SELECT_H_

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <curses.h>
# include <termios.h>
# include <term.h>

int	raw_mode(struct termios *t);
int	back_param(struct termios *t);
int	my_put_nbr(int nb);
void	my_putchar(char c);
int	my_strlen(char *str);

#endif /* !SELECT_H_ */
