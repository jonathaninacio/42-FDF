/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:28:49 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/24 12:25:56 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libc.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	d = (char *)dst;
	s = (char *)src;
	if (d > s && (d - s) <= (long)len)
		while (len--)
			d[len] = s[len];
	else
		ft_memcpy(d, s, len);
	return (d);
}
