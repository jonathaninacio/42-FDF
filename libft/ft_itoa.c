/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:31:09 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/21 15:43:17 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		i;
	char	*final;
	int		neg;

	i = 0;
	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_decade(n);
	if (!(final = (char *)malloc((sizeof(char) * (i + 1)))))
		return (NULL);
	final[i] = '\0';
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	while (i != 0)
	{
		final[--i] = (n % 10) + '0';
		n = n / 10;
	}
	if (neg == 1)
		final[0] = '-';
	return (final);
}
