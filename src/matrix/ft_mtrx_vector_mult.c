/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtrx_vector_mult.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <gsimeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/29 23:48:55 by gsimeon           #+#    #+#             */
/*   Updated: 2016/04/30 00:13:06 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_mtrx_vector_mult(float m[3][3], int *x, int *y, int *z)
{
	int	i;
	int	j;
	int	k;

	i = *x;
	j = *y;
	k = *z;
	*x = i * m[0][0] + j * m[0][1] + k * m[0][2];
	*y = i * m[1][0] + j * m[1][1] + k * m[1][2];
	*z = i * m[2][0] + j * m[2][1] + k * m[2][2];
}