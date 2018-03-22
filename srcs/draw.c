/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 05:08:48 by joinacio          #+#    #+#             */
/*   Updated: 2017/05/12 14:09:07 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

/*
** ____________________________________________________________
**                                                             |
**               check_positions(int x, int y)                 |
**                                                             |
**      check that the drawing is still inside the image       |
**     so it don't try to draw outside the image and crash     |
*/

int		check_positions(int x, int y)
{
	if ((x >= FULLHDX || x <= 0 || y >= FULLHDY || y <= 0))
		return (1);
	else
		return (0);
}

/*
** ____________________________________________________________
**                                                             |
**        drawpixel(t_data *z, int x, int y, int color)        |
**                                                             |
**           set a color to a pixel with his coord             |
*/

void	drawpixel(t_data *z, int x, int y, int color)
{
	z->modifiable[(y * FULLHDX) + (x)] = color;
}

/*
** ____________________________________________________________
**                                                             |
**          trace_line(t_data, from y0, to x1, to y1)          |
**                                                             |
**               trace a line from a coordinate                |
**                      to another one,                        |
**                     bresenham RULZ                          |
*/

void	trace_line(t_data *z, int y0, int x1, int y1)
{
	int e2;

	ft_preptrace(z, y0, x1, y1);
	while (1)
	{
		if (!check_positions(z->x0, y0))
		{
			drawpixel(z, z->x0, y0, set_color(0, z->red, z->gre, z->blu));
		}
		if (z->x0 == x1 && y0 == y1)
			return ;
		e2 = z->err;
		if (e2 > -z->dx)
		{
			z->err -= z->dy;
			z->x0 += z->sx;
		}
		if (e2 < z->dy)
		{
			z->err += z->dx;
			y0 += z->sy;
		}
	}
}

/*
** ____________________________________________________________
**                                                             |
**                     map_draw(t_data)                        |
**                                                             |
**               simply draw the map from the                  |
**                    top left corner,                         |
**               with modular zoom and z axis                  |
*/

void	map_draw(t_data *z)
{
	int i;
	int j;

	i = 0;
	while (i < z->p->lines)
	{
		z->x1 = z->xo;
		z->y1 = z->yo;
		j = 0;
		ft_whiletracing(z, i, j);
		z->xo = z->xo + z->zoom * 2;
		z->yo = z->yo + z->zoom;
		++i;
	}
}

/*
** ____________________________________________________________
**                                                             |
**                      draw_fdf(t_data)                       |
**                                                             |
**               set origins and then draw fdf                 |
**                 and the beautiful cursor too                |
*/

void	draw_fdf(t_data *z)
{
	int		w;
	int		h;
	int		a;

	w = 100;
	h = 100;
	a = 0;
	z->xo = z->orig_x;
	z->yo = z->orig_y;
	map_draw(z);
	z->stoopid = mlx_xpm_file_to_image(z->mlx, "srcs/transcat.xpm", &w, &h);
	z->stoopidm = (int *)mlx_get_data_addr(z->stoopid, &a, &a, &a);
	while (a < 45 * 43)
	{
		if (z->stoopidm[a] == 65280)
			z->stoopidm[a] = set_color(255, 0, 0, 0);
		a++;
	}
	mlx_put_image_to_window(z->mlx, z->win, z->imgbg, 0, 0);
	mlx_put_image_to_window(z->mlx, z->win, z->stoopid, z->move_x, z->move_y);
}
