/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:19:15 by scalero-          #+#    #+#             */
/*   Updated: 2022/07/27 19:06:51 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && ((s1[i] != '\0') || (s2[i] != '\0')))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	c = 0;
	i = 1;
	while (c - argc - 1)
	{
		while (i < argc -1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				ft_swap(&argv[i], &argv[i + 1]);
			i++;
		}
		c++;
	}
	i = 1;
	while (i < argc)
	{
		print(argv[i]);
		i++;
	}
	return (0);
}
