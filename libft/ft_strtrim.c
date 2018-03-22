/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 23:02:59 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/21 15:44:17 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *str;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		++s;
	if (*s == '\0')
		return (ft_strnew(0));
	str = (char *)s + ft_strlen((char *)s) - 1;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str--;
	return (ft_strsub(s, 0, str - s + 1));
}
