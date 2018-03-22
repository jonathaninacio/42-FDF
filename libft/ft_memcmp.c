/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 08:52:31 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/15 09:24:43 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	z;

	z = 0;
	while (z < n)
	{
		if (((unsigned char *)s1)[z] != ((unsigned char *)s2)[z])
			return (((unsigned char *)s1)[z] - ((unsigned char *)s2)[z]);
		z++;
	}
	return (0);
}
