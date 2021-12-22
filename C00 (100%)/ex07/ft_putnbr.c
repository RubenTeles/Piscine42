/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 12:54:33 by rteles            #+#    #+#             */
/*   Updated: 2021/07/04 16:16:50 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	potencia(int casas)
{
	int	resposta;

	resposta = 1;
	while (casas > 0)
	{
		resposta = resposta * 10;
		casas--;
	}
	return (resposta);
}

int	qantascasas(int casas, int nb)
{
	while ((nb / 10) >= 1)
	{
		nb = nb / 10;
		casas++;
	}
	return (casas);
}

int	negativo(int nb)
{
	if (nb < 0)
	{
		write (1, "-", 1);
		if (nb == -2147483648)
		{
			write (1, "2", 1);
			nb = 147483648;
		}
		else
		{
			nb = -1 * nb;
		}
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	char	ca;
	int		casas;

	nb = negativo(nb);
	casas = qantascasas(0, nb);
	while (casas > 0)
	{
		ca = (nb / potencia(casas));
		nb = nb - (ca * potencia(casas));
		ca = ca + 48;
		write(1, &ca, 1);
		ca = 0;
		casas--;
	}
	ca = (nb + 48);
	write(1, &ca, 1);
}
