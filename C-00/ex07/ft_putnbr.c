/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:41:08 by scalero-          #+#    #+#             */
/*   Updated: 2022/07/11 20:06:45 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		factorial;
	int		boolean;
	int		aux;
	char	d;

	factorial = 1;
	while (boolean == 0)
	{
		if (nb < factorial * 10)
		{
			boolean = 1;
		}
		else
		{
			factorial = factorial * 10;
		}
	}
	while (factorial >= 1)
	{
		aux = nb / factorial;
		d = '0' + aux;
		write(1, &d, 1);
		nb = nb % factorial;
		factorial = factorial / 10;
	}
}

int main()
{
	ft_putnbr(320);
}

