/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:17:16 by scalero-          #+#    #+#             */
/*   Updated: 2022/07/21 17:08:15 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	respuesta;

	i = 0;
	respuesta = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
		{
			respuesta = 0;
		}
		i++;
	}
	return (respuesta);
}

/*int	main()
{
	char cadena[] = {"akjhfadkAAjb"};
	printf("%d", ft_str_is_lowercase(cadena));
}*/
