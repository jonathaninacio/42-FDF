/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 08:59:48 by joinacio          #+#    #+#             */
/*   Updated: 2017/02/20 13:01:41 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	z;
	size_t	i;
	char	*str;

	z = 0;
	while (s[z])
		z++;
	if (!(str = (char*)malloc(z + 1)))
		return (NULL);
	i = 0;
	while (i < z)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
