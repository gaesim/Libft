/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <gsimeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 19:41:55 by gsimeon           #+#    #+#             */
/*   Updated: 2016/05/01 22:29:57 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isnumber(char *s)
{
	int		len;

	len = 0;
	if (s)
	{
		if ((s[len] == '-' || s[len] == '+') && ft_isdigit(s[len + 1]))
			len++;
		while (ft_isdigit(s[len]))
			len++;
	}
	return (len);
}
