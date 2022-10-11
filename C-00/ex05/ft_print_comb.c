/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__print_comb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:40:36 by scalero-          #+#    #+#             */
/*   Updated: 2022/07/11 20:01:42 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar_comb(char c)
{
	write(1, &c, 1);
}

void	print_comb(char x, char y, char z)
{
	putchar_comb(x + '0');
	putchar_comb(y + '0');
	putchar_comb(z + '0');
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				print_comb(a, b, c);
				if (a != 7 || b != 8 || c != 9)
				{
					putchar_comb(',');
					putchar_comb(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb();
}
