/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:50:31 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/09 14:24:55 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int				i;
	char			*d;
	char			*s;
	char			z;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	z = (char)c;
	if (n == 0 || d == s)
		return (NULL);
	while (n--)
	{
		d[i] = s[i];
		if (s[i] == z)
			return (d + i + 1);
		i++;
	}
	return (NULL);
}
