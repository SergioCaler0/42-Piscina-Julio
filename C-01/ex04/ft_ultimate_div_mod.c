/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 03:15:47 by scalero-          #+#    #+#             */
/*   Updated: 2022/07/17 12:30:14 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux_1;
	int	aux_2;

	aux_1 = *a;
	aux_2 = *b;
	*a = aux_1 / aux_2;
	*b = aux_1 % aux_2;
}

int	main(void)
{
	int	c;
	int	d;
	int	*e;
	int	*f;

	c = 42;
	d = 3;
	e = &c;
	f = &d;
	ft_ultimate_div_mod(e, f);
	printf("division = %d, resto = %d", *e, *f);
}
