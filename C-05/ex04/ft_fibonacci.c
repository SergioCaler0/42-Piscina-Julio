/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggranda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:00:39 by ggranda-          #+#    #+#             */
/*   Updated: 2022/07/27 17:29:31 by ggranda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	c;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		c = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (c);
	}
	else
		return (-1);
}

/*int main(void)
{
	printf("%d", ft_fibonacci(0));
}*/
