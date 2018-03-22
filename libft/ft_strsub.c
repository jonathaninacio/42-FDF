/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 04:05:14 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/24 19:00:18 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*z;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	if (!(z = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s[start + i] && i != (int)len)
	{
		z[i] = s[start + i];
		i++;
	}
	z[i] = '\0';
	return (z);
}
