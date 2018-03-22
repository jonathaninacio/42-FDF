/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 10:38:02 by joinacio          #+#    #+#             */
/*   Updated: 2017/05/12 14:16:03 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

/*
** ____________________________________________________________
**                                                             |
**                    ft_readlen(char *argv)                   |
**                                                             |
**              read the number of lines using GNL             |
*/

int		ft_readlen(char *argv)
{
	char	*temp;
	int		lines;
	int		fd;

	if ((fd = open(argv, O_RDONLY)) == -1)
	{
		ft_putendl_fd("Impossible d'ouvrir ce fichier", 2);
		exit(-1);
	}
	if (get_next_line(fd, &temp) == -1)
		ft_badmap();
	free(temp);
	lines = 1;
	while (get_next_line(fd, &temp) != 0)
	{
		free(temp);
		temp = NULL;
		lines++;
	}
	ft_putendl(temp);
	if (lines == 1)
		ft_badmap();
	close(fd);
	return (lines);
}

/*
** ____________________________________________________________
**                                                             |
**            ft_readpoints(char *argv, t_points *p)           |
**                                                             |
**            read the content of the file using GNL           |
**                  and save it as a char**                    |
*/

void	ft_readpoints(char *argv, t_points *p)
{
	int		fd;
	int		i;
	char	*temp;

	i = 0;
	p->filename = ft_strdup(argv);
	p->lines = ft_readlen(argv);
	if ((fd = open(argv, O_RDONLY)) == -1)
	{
		ft_putendl_fd("Impossible d'ouvrir ce fichier", 2);
		exit(-1);
	}
	p->pointfile = (char **)malloc(sizeof(char *) * (p->lines + 1));
	while (get_next_line(fd, &temp))
	{
		p->pointfile[i] = temp;
		i++;
	}
	p->pointfile[i] = NULL;
	close(fd);
}

/*
** ____________________________________________________________
**                                                             |
**          ft_size_checker(t_points *p, int **iarray)         |
**                                                             |
**        verify if the int arrays are the same length         |
**                        and return it                        |
*/

int		**ft_size_checker(t_points *p, int **iarray)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (b < p->lines)
	{
		while (iarray[b][a] != -2147483648)
			a++;
		if (a != p->len)
			ft_badmap();
		a = 0;
		b++;
	}
	return (iarray);
}
