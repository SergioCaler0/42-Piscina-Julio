/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggranda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:56:21 by ggranda-          #+#    #+#             */
/*   Updated: 2022/07/27 18:22:27 by ggranda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (x <= nb / x)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}

/*int main(void)
{
	printf("%d", ft_is_prime(1));
}*/
