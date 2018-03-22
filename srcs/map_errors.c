/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_errors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 10:38:02 by joinacio          #+#    #+#             */
/*   Updated: 2017/05/12 16:54:14 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

/*
** ____________________________________________________________
**                                                             |
**                     ft_argvchecker(argv[1])                 |
**                                                             |
**      verify if you have entered something in argument       |
*/

int		ft_argvchecker(char *argv, int argc)
{
	if (argv == NULL || argc != 2)
	{
		ft_putendl_fd("Avec un fichier c'est mieux...\n\
				usage: ./fdf  <input_file.fdf>", 2);
		return (-1);
	}
	else
		return (0);
}

int		ft_put_arg_error(void)
{
	ft_putendl_fd("mais c'est quoi tout ces arguments?", 2);
	return (-1);
}

void	ft_badmap(void)
{
	ft_putendl_fd("la map entree en argument n'est pas valide", 2);
	exit(0);
}

void	ft_badinit(void)
{
	ft_putendl_fd("erreur mlx_init()", 2);
	exit(0);
}
