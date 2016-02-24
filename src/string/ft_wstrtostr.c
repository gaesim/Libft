/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrtostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <gsimeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/24 05:01:17 by gsimeon           #+#    #+#             */
/*   Updated: 2016/02/24 05:11:30 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_wstrtostr(wchar_t *str)
{
	char	*out;
	char	*tmp1;
	char	*tmp2;

	out = ft_strnew(0);
	while (*str)
	{
		tmp1 = ft_wtoc(*str);
		tmp2 = ft_strjoin(out, tmp1);
		ft_strdel(&tmp1);
		ft_strdel(&out);
		out = tmp2;
		str++;
	}
	return (out);
}
