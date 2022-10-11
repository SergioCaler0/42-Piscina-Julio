/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:18:34 by scalero-          #+#    #+#             */
/*   Updated: 2022/07/21 17:10:56 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)

{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i <= size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (size);
}

/*int main()
{
	char destino [] = {"hola mundo"};
	char origen [] = {"mundo hola"};

	printf("%u", ft_strlcpy(destino, origen, 3));
}*/
