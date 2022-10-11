/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggranda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:25:53 by ggranda-          #+#    #+#             */
/*   Updated: 2022/07/27 17:28:17 by ggranda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	c;

	c = nb;
	if (c > c * nb)
		return (0);
	else if (power > 1)
		return (c * ft_recursive_power(c, power - 1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (c);
}
/*int main(void)
{
	printf("%d", ft_recursive_power(5, 2));
}*/
