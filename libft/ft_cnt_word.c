/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cnt_word.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 09:08:06 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/21 13:06:22 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_cnt_word(char *str, char z)
{
	int	cnt;
	int temp;

	temp = 1;
	cnt = 0;
	while (*str)
	{
		if (temp == 0 && *str == z)
			temp = 1;
		if (temp == 1 && *str != z)
		{
			temp = 0;
			cnt++;
		}
		str++;
	}
	return (cnt);
}
