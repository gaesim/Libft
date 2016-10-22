/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <gsimeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/02 00:13:47 by gsimeon           #+#    #+#             */
/*   Updated: 2016/10/21 14:32:33 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi_b(const char *str, int base)
{
	int			s;
	int			n;
	int			h;

	h = 0;
	s = 1;
	n = 0;
	if (str && base > 1 && base < 17)
	{
		while ((*str >= 9 && *str <= 13) || *str == ' ')
			str++;
		if (((s = (*str == '-' ? -1 : 1)) == -1 || *str == '+') && base == 10)
			str++;
		if (base == 16 && (h = ft_ishexa((const char *)str)))
			str += 2;
		h -= 2;
		while (ft_isdigit(*str) || h-- > 0)
		{
			if (ft_isdigit(*str))
				n = n * base + (*str++ - '0');
			if (base > 10 && ft_isalpha(*str))
				n = n * base + (ft_tolower(*str++) - 'a' + 10);
		}
	}
	return (s * n);
}
