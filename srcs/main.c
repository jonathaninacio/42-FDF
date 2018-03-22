/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 10:38:02 by joinacio          #+#    #+#             */
/*   Updated: 2017/05/12 04:59:20 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

/*
** ____________________________________________________________
**                                                             |
**                set_color(0, 255, 255, 255)                  |
**                                                             |
**             convert four unsigned char 0->255               |
**            set_color (alpha, red, green, blue)              |
**                 to a integer 0x00FFFFFF                     |
*/

int		set_color(unsigned char a, unsigned char r, \
		unsigned char v, unsigned char b)
{
	int color;

	color = (a * 16711680) + (r * 65536) + (v * 256) + b;
	return (color);
}

/*
** ____________________________________________________________
**                                                             |
**                     set_data(t_data)                        |
**                                                             |
**    set the t_data struct, mlx_init, window, motion var,     |
**   3(rgb) colors from 0 -> 255, set it as the int color,     |
**                void* image and int* image                   |
*/

int		ft_set_data(t_data *z, t_points *p)
{
	int a;

	a = 0;
	if (!(z->mlx = mlx_init()))
		ft_badinit();
	z->win = mlx_new_window(z->mlx, FULLHDX, FULLHDY, "fdf");
	z->move_y = 0;
	z->move_x = 0;
	z->red = 0;
	z->gre = 255;
	z->blu = 0;
	z->color = set_color(0, z->red, z->gre, z->blu);
	z->imgbg = mlx_new_image(z->mlx, FULLHDX, FULLHDY);
	z->modifiable = (int *)mlx_get_data_addr(z->imgbg, &a, &a, &a);
	z->p = p;
	ft_setmap(z);
	return (0);
}

/*
** ____________________________________________________________
**                                                             |
**                     multi_hook(t_data)                      |
**                                                             |
**    launch multiple mlx_hook :                               |
**                 - KeyPress -> KeyRelease                    |
**                 - DestroyNotify -> NoEventMask              |
**                 - MotionNotify -> NoEventMask               |
**                 - ButtonPress -> ButtonRelease              |
*/

void	multi_hook(t_data *z)
{
	mlx_hook(z->win, 2, 3, key, z);
	mlx_hook(z->win, 17, 0L, destroy, z);
	mlx_hook(z->win, 6, 0L, motion, z);
	mlx_hook(z->win, 4, 0L, button, z);
	mlx_expose_hook(z->win, ft_expose, z);
}

int		main(int argc, char **argv)
{
	t_data		z;
	t_points	*p;

	if (ft_argvchecker(argv[1], argc) == -1)
		return (-1);
	if (!(p = (t_points*)malloc(sizeof(t_points))))
		return (-1);
	ft_readpoints(argv[1], p);
	if (!(p->map = create_map(p)))
		return (-1);
	ft_set_data(&z, p);
	multi_hook(&z);
	draw_fdf(&z);
	mlx_loop(z.mlx);
	return (0);
}
