/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggranda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 08:36:07 by ggranda-          #+#    #+#             */
/*   Updated: 2022/07/26 19:26:02 by ggranda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	c;

	c = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
		c *= nb--;
	return (c);
}

/*int		main(void)
{
	printf("%d", ft_iterative_factorial(0));
}*/
