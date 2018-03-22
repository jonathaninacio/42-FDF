/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 13:20:50 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/24 19:34:27 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_lstlen(t_list *list)
{
	int	z;

	z = 0;
	if (!list)
		return (0);
	while (list)
	{
		list = list->next;
		z++;
	}
	return (z);
}
