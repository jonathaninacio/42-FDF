/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 06:37:50 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/24 19:01:03 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**split;
	int		i;
	int		wrd;

	i = 0;
	if (s == NULL)
		return (NULL);
	wrd = ft_cnt_word((char *)s, c);
	split = (char **)malloc(sizeof(*split) * (ft_cnt_word((char *)s, c) + 1));
	if (split == NULL)
		return (NULL);
	while (wrd)
	{
		while (*s && *s == c)
			s++;
		split[i] = ft_strsub(s, 0, ft_cnt_char((char *)s, c));
		if (split[i] == NULL)
			return (NULL);
		s = s + ft_cnt_char((char *)s, c);
		i++;
		wrd--;
	}
	split[i] = NULL;
	return (split);
}
