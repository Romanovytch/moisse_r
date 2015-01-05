/*
** my_putchar.c for  in /home/moisse_r/jamil
**
** Made by Raphael Moisset
** Login   <moisse_r@epitech.net>
**
** Started on  Tue Dec 30 17:25:40 2014 Raphael Moisset
** Last update Mon Jan  5 15:13:33 2015 Raphael Moisset
*/

#include "select.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
