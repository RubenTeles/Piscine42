/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 16:10:25 by rteles            #+#    #+#             */
/*   Updated: 2021/07/16 16:36:24 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (0);
	p = malloc((max - min) * sizeof(int));
	if (p == 0)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
/*#include <stdio.h>
int main()
{
    int *p;
    int i;
	i = 0;
    p = ft_range(0, 20);
    while (i < 20)
    {
        printf("%d ", p[i]);
        i++;
    }   
    free(p);
}*/