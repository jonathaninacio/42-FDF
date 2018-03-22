/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prep_tracing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 14:16:31 by joinacio          #+#    #+#             */
/*   Updated: 2017/05/12 14:20:36 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

/*
** ____________________________________________________________
**                                                             |
**                      ft_preptrace()                         |
**                                                             |
**            prepare the structure for tracing                |
*/

void	ft_preptrace(t_data *z, int y0, int x1, int y1)
{
	z->dx = abs(x1 - z->x0);
	z->sx = z->x0 < x1 ? 1 : -1;
	z->dy = abs(y1 - y0);
	z->sy = y0 < y1 ? 1 : -1;
	z->err = (z->dx > z->dy ? z->dx : -z->dy) / 2;
}

void	ft_whiletracing(t_data *z, int i, int j)
{
	while (j < z->p->len)
	{
		z->x2 = z->x1 + z->zoom * 2;
		z->y2 = z->y1 - z->zoom;
		z->x0 = z->x1;
		if (j < z->p->len - 1)
			trace_line(z, z->y1 - z->p->map[i][j] * z->zaxis / 5, z->x2,\
					z->y2 - z->p->map[i][j + 1] * z->zaxis / 5);
		z->x0 = z->x1;
		if (i < z->p->lines - 1)
			trace_line(z, z->y1 - z->p->map[i][j] * z->zaxis / 5, z->x2,\
					z->y2 + z->zoom * 2 - z->p->map[i + 1][j] * z->zaxis / 5);
		z->x1 = z->x2;
		z->y1 = z->y2;
		j++;
	}
}
