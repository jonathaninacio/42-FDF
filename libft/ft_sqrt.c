/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 19:28:07 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/24 19:28:42 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	imp;
	int	count;
	int z;

	z = 1;
	imp = 1;
	count = imp;
	if (z > nb || nb < 0)
		return (0);
	while (count != nb)
	{
		imp = imp + 2;
		count = count + imp;
		z++;
		if (count > nb)
			return (0);
	}
	return (z);
}
