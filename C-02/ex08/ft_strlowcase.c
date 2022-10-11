/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:06:38 by scalero-          #+#    #+#             */
/*   Updated: 2022/07/21 17:09:33 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] >= 65 && src[i] <= 90)
		{
			src[i] = src[i] + 32;
		}
		i++;
	}
	return (src);
}

/*int main()
{
	char cadena[] = {"HolA"};
	printf("%s",ft_strlowcase(cadena));
}*/
