/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:31:48 by rteles            #+#    #+#             */
/*   Updated: 2021/07/19 14:31:50 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	numero;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		numero = ft_fibonacci(index - 1);
		numero = numero + ft_fibonacci(index - 2);
	}
	return (numero);
}
/*#include <stdio.h>
int main()
{
	int i;
	i = ft_fibonacci(7);
	printf("%d", i);
}*/