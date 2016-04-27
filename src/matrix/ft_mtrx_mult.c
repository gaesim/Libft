/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtrx_mult.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <gsimeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 20:30:23 by gsimeon           #+#    #+#             */
/*   Updated: 2016/04/25 22:20:58 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_mtrx_mult(float mat1[3][3], float mat2[3][3], float mat[3][3], int n)
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
			i = n + 1;
			while (--i)
				mat[y][x] = mat[y][x] + mat1[y][n - i] * mat2[n - i][x];
			x++;
		}
		y++;
	}
}
