/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:19:53 by rteles            #+#    #+#             */
/*   Updated: 2021/07/19 13:19:56 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	numero;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	numero = nb;
	nb--;
	while (nb > 1)
	{
		numero = numero * nb;
		nb--;
	}
	return (numero);
}
/*#include <stdio.h>

int main()
{
	int i;
	i = ft_iterative_factorial(3);
	printf("%d", i);
}*/