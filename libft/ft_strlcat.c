/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:36:13 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/15 12:27:53 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;
	size_t z;

	z = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen + dstsize);
	while ((dstlen + z) < dstsize - 1 && src[z])
	{
		dst[dstlen + z] = src[z];
		z++;
	}
	dst[dstlen + z] = '\0';
	if (dstlen < dstsize)
		return (dstlen + srclen);
	else
		return (srclen + dstsize);
}
