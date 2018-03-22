/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:19:24 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/15 10:25:25 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	z;
	int	i;

	z = 0;
	while (dest[z])
		z++;
	i = 0;
	while (src[i])
	{
		dest[z + i] = src[i];
		i++;
	}
	dest[z + i] = '\0';
	return (dest);
}
