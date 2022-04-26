/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 21:58:43 by rteles            #+#    #+#             */
/*   Updated: 2021/07/15 22:14:22 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int size, char **args)
{
	int	i;
	int	o;

	o = size - 1;
	if (size > 1)
	{
		while (o >= 1)
		{
			i = 0;
			while (args[o][i])
				i++;
			write(1, args[o], i);
			write(1, "\n", 1);
			o--;
		}
	}
}