/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 20:00:13 by rteles            #+#    #+#             */
/*   Updated: 2021/07/15 15:59:56 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	c;
	int	s;
	int	res;

	c = 0;
	s = 1;
	res = 0;
	while (str[c] && ((str[c] >= 9 && str[c] <= 13) || str[c] == 32))
		c++;
	while (str[c] && (str[c] == '+' || str[c] == '-'))
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] && (str[c] >= '0' && str[c] <= '9'))
	{
		res = (str[c] - '0') + (res * 10);
		c++;
	}
	return (res * s);
}
/*
#include <stdio.h>
int	main()
{
	int	n;

	n = ft_atoi("");//-12066
	printf("%d", n);
}*/