/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 05:07:49 by joinacio          #+#    #+#             */
/*   Updated: 2017/05/12 05:08:01 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

/*
** ____________________________________________________________
**                                                             |
**                         destroy()                           |
**                                                             |
**          when red cross is used to exit the window          |
*/

int	destroy(t_data *z)
{
	mlx_destroy_image(z->mlx, z->imgbg);
	system("killall afplay &>/dev/null &");
	exit(0);
}
