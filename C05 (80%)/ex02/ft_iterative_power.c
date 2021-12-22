/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:54:05 by rteles            #+#    #+#             */
/*   Updated: 2021/07/19 13:54:07 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	numero;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	numero = nb;
	power--;
	while (power > 0)
	{
		numero = numero * nb;
		power--;
	}
	return (numero);
}
/*#include <stdio.h>
int main()
{
	int i;
	i = ft_recursive_factorial(2, 3);
	printf("%d", i);
	return 0;
}*/