/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <gsimeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:02:02 by gsimeon           #+#    #+#             */
/*   Updated: 2016/10/17 10:22:33 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*(const unsigned char *)s1 == *(const unsigned char *)s2 && --n)
	{
		s1 = (const char*)s1 + 1;
		s2 = (const char*)s2 + 1;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
