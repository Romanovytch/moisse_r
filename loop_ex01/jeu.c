/*
** jeu.c for game in /home/moisse_r/BrightCode/moisse_r/loop_ex01
**
** Made by Raphael Moisset
** Login   <moisse_r@epitech.net>
**
** Started on  Fri Dec 26 21:36:54 2014 Raphael Moisset
** Last update Fri Dec 26 21:45:12 2014 Raphael Moisset
*/

#include "brightcode.h"

void	disp_alpha(void)
{
  char	a;
  char	z;

  a = 'a';
  z = 'z';
  while (a <= z)
    {
      bc_write_char(a);
      a = a + 1;
    }
  bc_write_char('\n');
  a = 'a';
  while (z >= a)
    {
      bc_write_char(z);
      z = z - 1;
    }
  bc_write_char('\n');
}
