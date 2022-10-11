/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggranda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:07:04 by ggranda-          #+#    #+#             */
/*   Updated: 2022/07/28 11:42:02 by ggranda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	c;

	c = 1;
	if (nb > 0)
	{
		while (c * c <= nb)
		{
			if (c * c == nb)
				return (c);
			else if (c >= 46341)
				return (0);
			c++;
		}
	}
	return (0);
}
/*int main (void)
{
	printf("%d", ft_sqrt(16));
}*/
