/*
** mirror_tell_me.c for mirror_tell_me in /home/moisse_r/BrightCode/moisse_r/var_ex01
**
** Made by Raphael Moisset
** Login   <moisse_r@epitech.net>
**
** Started on  Fri Dec 26 20:04:45 2014 Raphael Moisset
** Last update Fri Dec 26 20:24:05 2014 Raphael Moisset
*/

#include "brightcode.h"

void	mirror_tell_me(void)
{
  bc_write_char('b' + 14);
  bc_write_char('r' - 10);
  bc_write_char('i' - 4);
  bc_write_char('g' + 7);
  bc_write_char('h' + 7);
  bc_write_char('t' - 7);
  bc_write_char('c' + 2);
  bc_write_char('o' - 1);
  bc_write_char('d' - 3);
  bc_write_char('e' + 7);
  bc_write_char('\n');
}
