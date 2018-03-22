/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 08:48:05 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/15 09:23:18 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		z;
	char	*str;

	z = 0;
	str = (char *)s;
	while (n--)
	{
		if (str[z] == (char)c)
			return (str + z);
		z++;
	}
	return (NULL);
}
