/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   button.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 04:59:57 by joinacio          #+#    #+#             */
/*   Updated: 2017/05/12 05:01:11 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

/*
** ____________________________________________________________
**                                                             |
**                          button()                           |
**                                                             |
**         used to associate mouse clicks with events          |
*/

int	button(int click, int x, int y, t_data *z)
{
	if (click == 1)
		system("afplay srcs/meow.wav &>/dev/null &");
	else if (click == 4)
		ft_rainbowshit(z);
	else if (click == 7)
		ft_rainbowshit(z);
	ft_redraw(z);
	x = y;
	return (0);
}
