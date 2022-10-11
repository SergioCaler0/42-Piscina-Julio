/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:40:03 by scalero-          #+#    #+#             */
/*   Updated: 2022/07/21 17:07:33 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	salida;

	i = 0;
	salida = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			salida = 1;
		}
		else
		{
			salida = 0;
			break ;
		}
		i++;
	}
	return (salida);
}

/*int	main()
{
	char destino[] = "abdf44c";

	ft_str_is_alpha(destino);
	printf("%d", ft_str_is_alpha(destino));
}*/
