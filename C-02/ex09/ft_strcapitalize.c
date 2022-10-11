/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 08:48:06 by scalero-          #+#    #+#             */
/*   Updated: 2022/07/21 17:10:10 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*minuscula(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	minuscula(str);
	if (str[i] != '\0' && str[i] >= 97 && str[i] <= 122)
	{
		str[i] = str[i] - 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i -1] < 48 || (str[i -1] > 57 && str[i -1] < 65)
			|| (str[i - 1] > 90 && str[i -1] < 97) || str[i -1] > 122)
		{
			if (!(str[i -1] >= 'A' && str[i -1] <= 'Z'))
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] -32;
				}
			}
		}
		i++;
	}
	return (str);
}

/*int main()
{
	char frase[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(frase));
}*/
