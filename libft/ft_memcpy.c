/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:26:24 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/10 10:05:39 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int		i;
	char				*d;
	char				*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (n == 0 || d == s)
		return (d);
	while (n--)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
