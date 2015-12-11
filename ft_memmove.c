/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:58:27 by gsimeon           #+#    #+#             */
/*   Updated: 2015/12/08 18:35:19 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;
	size_t	i;

	tmp = (char *)ft_memalloc(len + 1);
	if (src == dst || len == 0)
		return (dst);
	i = len;
	while (i--)
		tmp[i] = *((char *)src + i);
	while (len--)
		*((char *)dst + len) = tmp[len];
	return (dst);
}
