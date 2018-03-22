/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 09:54:56 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/15 10:28:11 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	search(char *sdest, const char *ssrc, unsigned int b)
{
	unsigned int	f;

	f = 0;
	while (f < b)
	{
		sdest[f] = ssrc[f];
		f++;
	}
}

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	z;

	z = 0;
	while (src[z] != '\0')
	{
		z++;
	}
	if (len <= z)
		search(dst, src, len);
	else
	{
		search(dst, src, len);
		while (z < len)
		{
			dst[z] = '\0';
			z++;
		}
	}
	return (dst);
}
