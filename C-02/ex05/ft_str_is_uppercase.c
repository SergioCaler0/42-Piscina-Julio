/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:14:09 by scalero-          #+#    #+#             */
/*   Updated: 2022/07/21 17:08:29 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	respuesta;

	i = 0;
	respuesta = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			respuesta = 0;
		}
		i++;
	}
	return (respuesta);
}

/*int	main()
{
	char cadena[] = {"ABtC"};
	printf("%d", ft_str_is_uppercase(cadena));
}*/
