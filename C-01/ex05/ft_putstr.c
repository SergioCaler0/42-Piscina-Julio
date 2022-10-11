/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 04:28:28 by scalero-          #+#    #+#             */
/*   Updated: 2022/07/17 12:31:28 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	a;

	a = '\0';
	while (*(str + a) != '\0')
	{
		write(1, str + a, 1);
		a += 1;
	}	
}

int	main(void)
{
	char	*str;

	str = "Hola mundo";
	ft_putstr(str);
}
