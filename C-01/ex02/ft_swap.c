/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:01:20 by scalero-          #+#    #+#             */
/*   Updated: 2022/07/17 12:27:44 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	variable_inter;

	variable_inter = *a;
	*a = *b;
	*b = variable_inter;
}

int	main(void)
{
	int	funcion_1;
	int	funcion_2;

	funcion_1 = 24;
	funcion_2 = 42;
	ft_swap(&funcion_1, &funcion_2);
	printf("a = %d, b = %d", funcion_1, funcion_2);
}
