/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 22:12:37 by rteles            #+#    #+#             */
/*   Updated: 2021/07/16 15:52:12 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **s1, char **s2)
{
	char	*a;

	a = *s1;
	*s1 = *s2;
	*s2 = a;
}

void	ft_putchar(char **args, int size, int o)
{
	int	i;

	while (o < size)
	{
		i = 0;
		while (args[o][i])
			i++;
		write(1, args[o], i);
		write(1, "\n", 1);
		o++;
	}
}

int	main(int size, char **args)
{
	int	i;
	int	o;

	o = 1;
	if (size < 2)
		return (0);
	while (o < size - 1)
	{
		i = 0;
		if (args[o][i] == args[o + 1][i])
		{
			while ((args[o][i] || args[o + 1][i])
				&& (args[o][i] == args[o + 1][i]))
				i++;
		}
		if (args[o][i] > args[o + 1][i])
		{
			ft_swap(&args[o], &args[o + 1]);
			o = 0;
		}
		o++;
	}
	ft_putchar(args, size, 1);
}
