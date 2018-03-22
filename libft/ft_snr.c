/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_snr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 18:00:58 by joinacio          #+#    #+#             */
/*   Updated: 2017/01/16 18:04:21 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** search a char and replace with another one
*/

char		*ft_snr(char *str, char s, char r)
{
	int		i;
	char	*new;

	i = 0;
	new = ft_strdup(str);
	while (str[i])
	{
		if (str[i] == s)
		{
			new[i] = r;
		}
		i++;
	}
	str = ft_strdup(new);
	return (str);
}
