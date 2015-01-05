/*
** main.c for main in /home/moisse_r/rendu/PSU_2014_my_select
**
** Made by Raphael Moisset
** Login   <moisse_r@epitech.net>
**
** Started on  Mon Jan  5 08:57:09 2015 Raphael Moisset
** Last update Mon Jan  5 15:23:40 2015 Raphael Moisset
*/

#include "select.h"

int			main(void)
{
  struct termios	t;
  char			buff[1];

  if (tcgetattr(0, &t) == -1)
    {
      printf("tcgetattr failed\n");
      return (-1);
    }
  if (raw_mode(&t) == -1)
    return (1);
  while (42)
    {
      read(0, buff, 1);
      my_put_nbr(buff[0]);
      if (buff[0] == 10)
	return (back_param(&t));
    }
  return (0);
}

int			raw_mode(struct termios *t)
{
  t->c_lflag &= ~ICANON;
  t->c_lflag &= ~ECHO;
  t->c_cc[VMIN] = 1;
  t->c_cc[VTIME] = 0;
  if (tcsetattr(0, t) == -1)
    {
      printf("tcsetattr failed\n");
      return (-1);
    }
  return (0);
}

int			back_param(struct termios *t)
{
  t->c_lflag &= ICANON;
  t->c_lflag &= ECHO;
  if (tcsetattr(0, t) == -1)
    {
      printf("tcsetattr failed\n");
      return (-1);
    }
  my_putchar('\n');
  return (1);
}
