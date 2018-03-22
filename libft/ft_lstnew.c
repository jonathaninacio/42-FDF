/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 09:37:22 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/22 18:10:30 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*zboub;

	if (!(zboub = ft_memalloc(sizeof(t_list))))
		return (NULL);
	zboub->next = NULL;
	if (content == NULL)
	{
		zboub->content = NULL;
		zboub->content_size = 0;
		return (zboub);
	}
	zboub->content_size = content_size;
	if (!(zboub->content = ft_memalloc(content_size)))
		return (NULL);
	zboub->content = ft_memcpy(zboub->content, content, content_size);
	return (zboub);
}
