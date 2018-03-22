/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:53:26 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/24 12:29:48 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int	z;
	int	rech;

	z = 0;
	if (ft_strlen(s2) == '\0')
		return ((char *)s1);
	while (s1[z] && z < (int)len)
	{
		rech = 0;
		while (s1[z] == s2[rech] && z < (int)len)
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
