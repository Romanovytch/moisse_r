/*
** test.c for test in /home/moisse_r/BrightCode/moisse_r
**
** Made by Raphael Moisset
** Login   <moisse_r@epitech.net>
**
** Started on  Sat Dec 27 14:44:35 2014 Raphael Moisset
** Last update Sun Dec 28 14:53:51 2014 Raphael Moisset
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "brightcode.h"
#include "asx.h"

int	main(int ac, char **av)
{
  int	i;
  int	k;
  int	j;
  int	fd;
  char	c;
  char	*buff;
  char	*stock;
  char	*on_pese;
  char	*name;

  on_pese = NULL;
  i = 0;
  k = 0;
  j = 0;
  while (av[1][i] != '\0')
    i = i + 1;
  i = i - 1;
  if (av[1][i] == 's' && av[1][i - 1] == 'r' && av[1][i - 2] == 'e'
      && av[1][i - 3] == 'p' && av[1][i - 4] == '.')
    fd = open(av[1], O_RDONLY);
  else
    {
      bc_write_string("Nique bien ta mère\n");
      close(fd);
      return (1);
    }
  buff = bc_read_line(fd);
  i = 0;
  while (buff[i])
    i++;
  if (i > 28)
    {
      bc_write_string("Nique bien ta mère encore une fois\n");
      close(fd);
      return (1);
    }
  i = 0;
  while (buff[i])
    {
      if (buff[i] == '"')
	{
	  k = i;
	  while (buff[k] != '"')
	    k++;
	  stock = malloc(k * sizeof(char));
	  i++;
	  while (buff[i] != '"')
	    {
	      stock[j] = buff[i];
	      i++;
	      j++;
	    }
	  name = malloc(sizeof(av[1]));
	  name = av[1];
	  stock[j] = '\0';
	}
      i++;
    }
  on_pese = my_strcat(on_pese, stock); // .name
  buff = bc_read_line(fd);
  i = 0;
  k = 0;
  while (buff[i] != ' ')
    i++;
  i++;
  k = i;
  while (buff[k])
    k++;
  stock = malloc(k * sizeof(char));
  j = 0;
  while (buff[i])
    {
      stock[j] = buff[i];
      i++;
      j++;
    }
  on_pese = my_strcat(on_pese, stock); // .attaque
  buff = bc_read_line(fd);
  i = 0;
  k = 0;
  while (buff[i] != ' ')
    i++;
  i++;
  k = i;
  while (buff[k])
    k++;
  stock = malloc(k * sizeof(char));
  j = 0;
  while (buff[i])
    {
      stock[j] = buff[i];
      i++;
      j++;
    }
  on_pese = my_strcat(on_pese, stock); // .defense
  buff = bc_read_line(fd);
  i = 0;
  k = 0;
  while (buff[i] != ' ')
    i++;
  i++;
  k = i;
  while (buff[k])
    k++;
  stock = malloc(k * sizeof(char));
  j = 0;
  while (buff[i])
    {
      stock[j] = buff[i];
      i++;
      j++;
    }
  on_pese = my_strcat(on_pese, stock); // .vie
  buff = bc_read_line(fd);
  i = 0;
  k = 0;
  while (buff[i] != ' ')
    i++;
  i++;
  k = i;
  while (buff[k])
    k++;
  stock = malloc(k * sizeof(char));
  j = 0;
  while (buff[i])
    {
      stock[j] = buff[i];
      i++;
      j++;
    }
  on_pese = my_strcat(on_pese, stock); // .mana
  close(fd);
  buff = bc_read_line(fd); // pour sauter la ligne vide
  buff = bc_read_line(fd); // pour sauter le "#script"
  buff = bc_read_line(fd);
  i = 0;
  k = 0;
  while (buff[i] != ' ')
    i++;
  i++;
  k = i;
  while (buff[k])
    k++;
  stock = malloc(k * sizeof(char));
  j = 0;
  while (buff[i])
    {
      stock[j] = buff[i];
      i++;
      j++;
    }
  on_pese = my_strcat(on_pese, stock); // atk
  close(fd);
  buff = bc_read_line(fd);
  i = 0;
  k = 0;
  while (buff[i] != ' ')
    i++;
  i++;
  k = i;
  while (buff[k])
    k++;
  stock = malloc(k * sizeof(char));
  j = 0;
  while (buff[i])
    {
      stock[j] = buff[i];
      i++;
      j++;
    }
  on_pese = my_strcat(on_pese, stock); // def
  bc_write_string(on_pese);
  close(fd);
  buff = bc_read_line(fd);
  i = 0;
  k = 0;
  while (buff[i] != ' ')
    i++;
  i++;
  k = i;
  while (buff[k])
    k++;
  stock = malloc(k * sizeof(char));
  j = 0;
  while (buff[i])
    {
      stock[j] = buff[i];
      i++;
      j++;
    }
  on_pese = my_strcat(on_pese, stock); // spl
  bc_write_string(on_pese);
  close(fd);
  i = 0;
  while (name[i])
    i++;
  name[i - 3] = '\0';
  name[i - 4] = 'x';
  fd = open(name, O_RDWR | O_CREAT, S_IWUSR | S_IRUSR | S_IRGRP | S_IROTH);
  close(fd);
  return (0);
}
