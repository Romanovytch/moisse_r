/*
** age.c for age in /home/moisse_r/BrightCode/moisse_r/if_ex01
**
** Made by Raphael Moisset
** Login   <moisse_r@epitech.net>
**
** Started on  Fri Dec 26 20:36:08 2014 Raphael Moisset
** Last update Fri Dec 26 21:30:43 2014 Raphael Moisset
*/

#include "brightcode.h"

void	age_if(int a)
{
  if (a == 0)
    bc_write_string("Good Joke!\n");
  else if (a == 5)
    bc_write_string("Too Young!\n");
  else if (a == 12)
    bc_write_string("Child!\n");
  else if (a == 16)
    bc_write_string("Teenager!\n");
  else if (a == 18)
    bc_write_string("You're an adult!\n");
  else
    bc_write_string("\n");
}

void	age_case(int a)
{
  switch (a)
    {
    case 0:
    bc_write_string("Good Joke!\n");
    break;
    case 5:
    bc_write_string("Too Young!\n");
    break;
    case 12:
    bc_write_string("Child!\n");
    break;
    case 16:
    bc_write_string("Teenager!\n");
    break;
    case 18:
    bc_write_string("You're an adult!\n");
    break;
    default:
    bc_write_string("\n");
    }
}
