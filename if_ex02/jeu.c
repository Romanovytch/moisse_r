/*
** le_jeu.c for the_game in /home/moisse_r/BrightCode/moisse_r/if_ex02
**
** Made by Raphael Moisset
** Login   <moisse_r@epitech.net>
**
** Started on  Fri Dec 26 21:22:00 2014 Raphael Moisset
** Last update Fri Dec 26 21:30:06 2014 Raphael Moisset
*/

#include "brightcode.h"

void	bank(int age, int money)
{
  if (age < 18 || money < 1000)
    bc_write_string("You can't enter the bank.\n");
  else if (age > 70 && money >= 100000)
    bc_write_string("Make a placement...\n");
  else if (money > 100000)
    bc_write_string("WELCOME, HAVE A SIT !\n");
  else if (money > 10000)
    bc_write_string("Welcome.\n");
  else
    bc_write_string("You can enter the bank.\n");
}
