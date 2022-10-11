/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:32:20 by scalero-          #+#    #+#             */
/*   Updated: 2022/07/21 17:08:47 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	respuesta;

	i = 0;
	respuesta = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			respuesta = 0;
		}
		i++;
	}
	return (respuesta);
}

/*int	main()
{
	char cadena[] = {"r	gono"};
	printf("%d", ft_str_is_printable(cadena));
}*/
