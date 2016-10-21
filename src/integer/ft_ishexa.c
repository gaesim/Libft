/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ishexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <gsimeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/01 20:59:06 by gsimeon           #+#    #+#             */
/*   Updated: 2016/10/21 14:33:33 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ishexa(const char *s)
{
	int		len;

	len = 0;
	if (s)
	{
		if (s[0] == '0' && (*(s + 1) == 'x' || *(s + 1) == 'X'))
		{
			len += 2;
			s += 2;
			while (*s && (ft_isdigit(*s) || ft_strchr("abcdefABCDEF", (int)*s)))
			{
				len++;
				s++;
			}
		}
	}
	return (len);
}
