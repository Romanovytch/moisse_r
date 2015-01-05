/*
** my_strlen.c for my_strlen in /home/moisse_r/rendu/PSU_2014_my_printf
**
** Made by Raphael Moisset
** Login   <moisse_r@epitech.net>
**
** Started on  Thu Nov 13 12:29:06 2014 Raphael Moisset
** Last update Mon Jan  5 15:13:57 2015 Raphael Moisset
*/

#include "select.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}
