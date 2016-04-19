/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtrx_mult.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <gsimeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 20:30:23 by gsimeon           #+#    #+#             */
/*   Updated: 2016/04/19 21:20:27 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_mtrx_mult(float **mat1, float **mat2, float **mat, int n)
{
	int		x;
	int		y;
	int		i;

	y = 0;
	while (n > y)
	{
		x = 0;
		while (n > x)
		{
			i = 0;
			while (n > i++)
				mat[y][x] += mat1[y][n - i] * mat2[n - i][x];
			x++;
		}
		y++;
	}
}
