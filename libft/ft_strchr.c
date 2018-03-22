/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 13:18:00 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/24 12:27:03 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		z;

	z = 0;
	while (s[z])
	{
		if (s[z] == (char)c)
			return ((char*)&s[z]);
		z++;
	}
	if (s[z] == (char)c)
		return ((char*)&s[z]);
	return (NULL);
}
