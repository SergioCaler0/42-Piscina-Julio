/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:45:28 by scalero-          #+#    #+#             */
/*   Updated: 2022/07/17 12:28:57 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	division;
	int	resto;
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 16;
	b = 3;
	div = &division;
	mod = &resto;
	ft_div_mod(a, b, div, mod);
	printf("resultado division: %d, resto: %d", division, resto);
}
