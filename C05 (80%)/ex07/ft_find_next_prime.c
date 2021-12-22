/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:12:07 by rteles            #+#    #+#             */
/*   Updated: 2021/07/19 16:12:09 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	numero;
	int	numeroinv;

	if (nb <= 2)
		return (2);
	else if ((nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0) && nb > 5)
		return (ft_find_next_prime(nb + 1));
	else if (nb == 4)
		return (5);
	else
	{
		numero = 3;
		numeroinv = nb / 2;
		while (numero <= numeroinv)
		{
			if (nb % numero == 0 || nb % numeroinv == 0)
				return (ft_find_next_prime(nb + 1));
			numero += 2;
			numeroinv -= 2;
		}
	}
	return (nb);
}
/*#include <stdio.h>
int main()
{
	int i;
	i = ft_find_next_prime(2147483630);
	printf("1: %d\n", i);
}*/