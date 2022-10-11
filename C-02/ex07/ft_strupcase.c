/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:45:53 by scalero-          #+#    #+#             */
/*   Updated: 2022/07/21 17:09:03 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] >= 97 && src[i] <= 122)
		{
			src[i] = src[i] - 32;
		}
		i++;
	}
	return (src);
}

/*int	main()
{
	char cadena[] = {"hola"};
	printf("%s",ft_strupcase(cadena));
}*/
