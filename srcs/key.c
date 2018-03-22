/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 14:09:55 by joinacio          #+#    #+#             */
/*   Updated: 2017/05/12 14:10:55 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

/*
** ____________________________________________________________
**                                                             |
**                        key(), key2()                        |
**                                                             |
**       function used to associate keypress with events       |
*/

int		key(int keycode, t_data *z)
{
	if (keycode == 53)
	{
		mlx_destroy_image(z->mlx, z->imgbg);
		system("killall afplay &>/dev/null &");
		exit(0);
	}
	else if (keycode == 123)
		z->orig_x = z->orig_x + 50;
	else if (keycode == 124)
		z->orig_x = z->orig_x - 50;
	key2(keycode, z);
	return (0);
}

void	key2(int keycode, t_data *z)
{
	if (keycode == 125)
		z->orig_y = z->orig_y - 50;
	else if (keycode == 126)
		z->orig_y = z->orig_y + 50;
	else if (keycode == 91)
		z->zoom = z->zoom + 1;
	else if (keycode == 84)
		z->zoom = z->zoom - 1;
	else if (keycode == 83)
		z->zaxis = z->zaxis - 1;
	else if (keycode == 89)
		z->zaxis = z->zaxis + 1;
	ft_redraw(z);
}

/*
** ____________________________________________________________
**                                                             |
**                     ft_expose(t_data)                       |
**                                                             |
**               return a simple redraw functon,               |
**                      MLX EXPOSE HOOK,                       |
*/

int		ft_expose(t_data *z)
{
	ft_redraw(z);
	return (0);
}

/*
** ____________________________________________________________
**                                                             |
**                     ft_redraw(t_data)                       |
**                                                             |
**            functon that restart a fresh drawing             |
**                     of the main image                       |
*/

void	ft_redraw(t_data *z)
{
	ft_memset(z->modifiable, 0, FULLHDX * FULLHDY * 4);
	mlx_destroy_image(z->mlx, z->stoopid);
	draw_fdf(z);
}
