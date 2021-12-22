/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 17:37:26 by rteles            #+#    #+#             */
/*   Updated: 2021/07/19 17:37:29 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	sizetotal(int size, char **strs, char *sep)
{
	int	length;
	int	i;
	int	o;

	o = 0;
	length = 0;
	while (o < size)
	{
		i = 0;
		while (strs[o][i])
			i++;
		length = length + i;
		o++;
	}
	i = 0;
	while (sep[i])
		i++;
	length = length + (i * (size - 1));
	return (length);
}

int	ft_concatenar(char **dest, char *src, int b)
{
	int	i;

	i = 0;
	while (src[i])
	{
		(*dest)[b] = src[i];
		i++;
		b++;
	}
	return (b);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		o;
	int		b;

	if (size == 0)
		return (malloc(1));
	s = malloc((sizetotal(size, strs, sep) + 1) * sizeof(char));
	if (s == 0)
		return (0);
	o = 0;
	b = 0;
	while (o < size)
	{
		b = ft_concatenar(&s, strs[o], b);
		if (o == (size - 1))
			break ;
		b = ft_concatenar(&s, sep, b);
		o++;
	}
	s[b] = '\0';
	return (s);
}
/*#include <stdio.h>
int	main(void)
{
	char *text[10];

	text[0] = "Testando";
	text[1] = "a";
	text[2] = "funcao";
	text[3] = "ft_strjoin";
	text[4] = "com";
	text[5] = "o";
	text[6] = "separador";
	text[7] = "\' - \'";
	text[8] = "e tamanho";
	text[9] = "10";

	printf("%s\n", ft_strjoin(0, text, " | "));
}*/