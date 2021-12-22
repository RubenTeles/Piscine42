/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 23:50:00 by rteles            #+#    #+#             */
/*   Updated: 2021/07/19 23:50:02 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	digit(char s, char *base)
{
	int	n;

	n = 0;
	while (base[n] != 0 && base[n] != s)
		n++;
	return (n);
}

int	verificar(char *base)
{
	int	i;
	int	o;

	i = 0;
	o = 0;
	while (base[i])
	{
		o = 0;
		while (o < i)
		{
			if (base[i] == base[o] || (base[i] >= 9 && base[i] <= 13)
				|| base[i] == 32 || base[i] == '-' || base[i] == '+')
				return (0);
			o++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	basesize;
	int	nb;
	int	neg;

	nb = 0;
	neg = 1;
	basesize = verificar(base);
	if (basesize <= 1)
		return (0);
	while (*str != 0 && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	while (*str != 0 && (*str == '-' || *str == '+'))
	{
		if (*str++ == '-')
			neg *= -1;
	}
	while (*str != 0 && (digit(*str, base) < basesize))
	{
		nb = (basesize * nb) + (digit(*str, base));
		str++;
	}
	return (nb * neg);
}
/*
#include <stdio.h>
int main()
{
	int	n;

	n = ft_atoi_base("", "01234567");//-12066
	printf("%d", n);
}*/