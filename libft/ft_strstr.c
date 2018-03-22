/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:53:26 by joinacio          #+#    #+#             */
/*   Updated: 2016/12/09 13:45:57 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	z;
	int	rech;

	z = 0;
	if (ft_strlen(s2) == '\0')
		return ((char *)s1);
	while (s1[z])
	{
		rech = 0;
		while (s1[z] == s2[rech])
		{
			rech++;
			z++;
			if (s2[rech] == '\0')
				return ((char *)s1 + (z - rech));
		}
		z = z - rech;
		z++;
	}
	return (0);
}
