/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 10:38:02 by joinacio          #+#    #+#             */
/*   Updated: 2017/05/12 05:07:14 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

/*
** ____________________________________________________________
**                                                             |
**                     destroy_array(str)                      |
**                                                             |
**                    del and free an array                    |
*/

static void		destroy_array(char **str)
{
	int a;

	a = 0;
	while (str[a])
	{
		ft_strdel(&str[a]);
		++a;
	}
	free(str);
}

/*
** ____________________________________________________________
**                                                             |
**                        map_line(str)                        |
**                                                             |
**         split an array to transform it into a int*          |
**             that int* ends with -2147483648                 |
*/

static int		*map_line(char *str)
{
	char	**array;
	int		*iarr;
	int		b;

	if (!(array = ft_strsplit(str, ' ')))
		return (NULL);
	b = 0;
	while (array[b])
		++b;
	if (b == 0 || b == 1)
		ft_badmap();
	if (!(iarr = (int*)malloc(sizeof(int) * (b + 1))))
		return (NULL);
	b = -1;
	while (array[++b])
	{
		iarr[b] = ft_atoi(array[b]);
	}
	iarr[b] = -2147483648;
	destroy_array(array);
	return (iarr);
}

/*
** ____________________________________________________________
**                                                             |
**                     create_map(t_data)                      |
**                                                             |
**              turn an array tab into an int tab              |
*/

int				**create_map(t_points *p)
{
	int		**iarray;
	int		a;

	if (!(iarray = (int**)malloc(sizeof(int*) * (p->lines + 1))))
		return (NULL);
	a = -1;
	while (++a < p->lines)
		iarray[a] = map_line(p->pointfile[a]);
	iarray[a] = NULL;
	a = 0;
	while (iarray[0][a] != -2147483648)
		a++;
	p->len = a;
	return (ft_size_checker(p, iarray));
}

/*
** ____________________________________________________________
**                                                             |
**                     ft_setmap(t_data)                       |
**                                                             |
**              functon that set the map origins               |
**                  at the very beginning                      |
*/

void			ft_setmap(t_data *z)
{
	z->zoom = 3;
	z->zaxis = 5;
	z->orig_x = FULLHDX / 6;
	z->orig_y = FULLHDY / 1.5;
	ft_howto();
	if (ft_strcmp("test_maps/nyancat.fdf", z->p->filename) == 0)
		system("afplay srcs/nyanya.mp3 &>/dev/null &");
}

/*
** ____________________________________________________________
**                                                             |
**                     ft_howto(t_data)                        |
**                                                             |
*/

void			ft_howto(void)
{
	ft_putendl("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\
	\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\
	----------------------------------------\n\
	------------------FDF-------------------\n\
	\n\
	size : (+) on numpad8 or (-) on numpad2\n\n\
	scale : (+) on numpad7 or (-) on numpad1\n\n\
	move : upkey, downkey, leftkey, rightkey\n\n\
	scroll to change color.\n\n\
	= ^ 3 ^ = CLICK TO MEOW! = ^ 3 ^ =\n\n\
	");
}
