/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:40:39 by rteles            #+#    #+#             */
/*   Updated: 2021/07/19 13:53:23 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	numero;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 2)
	{
		numero = ft_recursive_factorial(nb - 1);
		numero = numero * nb;
		nb--;
	}
	else
		numero = nb;
	return (numero);
}
/*
#include <stdio.h>
int main()
{
	int i;
	i = ft_recursive_factorial(3);
	printf("%d", i);
}*/