/*
** my_put_nbr.c for my_put_nbr in /home/moisse_r/rendu/Piscine_C_J03
**
** Made by Raphaël Moisset
** Login   <moisse_r@epitech.net>
**
** Started on  Wed Oct  1 21:49:45 2014 Raphaël Moisset
** Last update Mon Jan  5 15:13:13 2015 Raphael Moisset
*/

#include "select.h"

int	my_put_nbr(int nb)
{
  while (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  if (nb >= 10)
    my_put_nbr(nb / 10);
  my_putchar(nb % 10 + '0');
  return (0);
}
