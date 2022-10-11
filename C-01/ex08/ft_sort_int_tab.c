/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:08:33 by scalero-          #+#    #+#             */
/*   Updated: 2022/07/17 12:36:44 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = 0;
		}
		else
		{
		i++;
		}
	}
}

int	main(void)
{
	int	tab[] = {3, 2, 10, 5, 8, 6, 235, 1, 4};

	ft_sort_int_tab(tab, 9);
	printf("%d ", tab[0]);
	printf("%d ", tab[1]);
	printf("%d ", tab[2]);
	printf("%d ", tab[3]);
	printf("%d ", tab[4]);
	printf("%d ", tab[5]);
	printf("%d ", tab[6]);
	printf("%d ", tab[7]);
	printf("%d ", tab[8]);
}
