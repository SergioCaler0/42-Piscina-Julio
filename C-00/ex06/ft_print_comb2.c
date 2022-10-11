/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:18:07 by scalero-          #+#    #+#             */
/*   Updated: 2022/07/11 20:00:15 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar_comb(char c)
{
	write(1, &c, 1);
}

void	print_comb2(int i, int f)
{
	char	a;
	char	b;

	a = i / 10 + '0';
	putchar_comb(a);
	b = i % 10 + '0';
	putchar_comb(b);
	putchar_comb(' ');
	a = f / 10 + '0';
	putchar_comb(a);
	b = f % 10 + '0';
	putchar_comb(b);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_comb2(a, b);
			if (a != 98 || b != 99)
			{
				write(1 ,", ", 2);
			}
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb2();
}
