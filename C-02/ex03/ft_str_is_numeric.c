/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:41:54 by scalero-          #+#    #+#             */
/*   Updated: 2022/10/10 14:07:36 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	respuesta;

	i = 0;
	respuesta = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			respuesta = 1;
		else
		{
			respuesta = 0;
			break ;
		}
		i++;
	}
	return (respuesta);
}

/*int	main()
{
	char cadena[] = "123542df3";

	printf("%d", ft_str_is_numeric(cadena));
}*/
