/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:06:31 by scalero-          #+#    #+#             */
/*   Updated: 2022/07/17 12:34:16 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i != size / 2)
	{
		aux = tab[i];
		tab[i] = tab[size - (i + 1)];
		tab[size - (i + 1)] = aux;
		i++;
	}
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6};

	ft_rev_int_tab(tab, 6);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
	printf("%d", tab[5]);
}
