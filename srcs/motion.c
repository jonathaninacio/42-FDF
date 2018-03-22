/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   motion.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 14:13:35 by joinacio          #+#    #+#             */
/*   Updated: 2017/05/12 14:14:15 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

/*
** ____________________________________________________________
**                                                             |
**                          motion()                           |
**                                                             |
**        used to associate mouse movement with events         |
*/

int		motion(int mouse_x, int mouse_y, t_data *z)
{
	if (ft_strcmp("test_maps/nyancat.fdf", z->p->filename) == 0)
	{
		ft_rainbowshit(z);
		if (z->zaxis > -10 && z->wiggle == 1)
			z->zaxis--;
		else if (z->zaxis < 10 && z->wiggle == 0)
			z->zaxis++;
		if (z->zaxis <= -10)
			z->wiggle = 0;
		if (z->zaxis >= 10)
			z->wiggle = 1;
	}
	z->move_x = mouse_x;
	z->move_y = mouse_y;
	ft_redraw(z);
	return (0);
}

/*
** ____________________________________________________________
**                                                             |
**                  ft_rainbowshit(t_data)                     |
**                                                             |
**               COLORS! F*CKING COLOOOOOOOORS                 |
**                 YEAH unicorn puke!!!1!11!                   |
*/

void	ft_rainbowshit(t_data *z)
{
	if (z->red > 0 && z->gre == 255)
		z->red = z->red - 15;
	else if (z->gre > 0 && z->blu == 255)
		z->gre = z->gre - 15;
	else if (z->blu > 0 && z->red == 255)
		z->blu = z->blu - 15;
	else if (z->red < 255 && z->gre == 0)
		z->red = z->red + 15;
	else if (z->gre < 255 && z->blu == 0)
		z->gre = z->gre + 15;
	else if (z->blu < 255 && z->red == 0)
		z->blu = z->blu + 15;
}
