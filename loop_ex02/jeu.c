/*
** jeu.c for game in /home/moisse_r/BrightCode/moisse_r/loop_ex02
**
** Made by Raphael Moisset
** Login   <moisse_r@epitech.net>
**
** Started on  Fri Dec 26 21:46:52 2014 Raphael Moisset
** Last update Fri Dec 26 22:24:37 2014 Raphael Moisset
*/

#include "brightcode.h"

void		star_pyramid(unsigned int i)
{
  unsigned int	j;
  unsigned int	k;

  k = i;
  j = 0;
  if (i == 0)
    bc_write_char('\n');
  while (k > 0)
    {
      bc_write_char(' ');
      k = k - 1;
    }
  while (j < i)
    {
      bc_write_char('*');
      j++;
    }
  bc_write_char('\n');
  bc_write_char('\n');
}
