/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:11:40 by rteles            #+#    #+#             */
/*   Updated: 2021/07/22 14:11:41 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	checkcharset(char letra, char *charset)
{
	int	a;

	a = 0;
	while (charset[a] != letra && charset[a] != '\0')
		a++;
	if (charset[a] == letra)
		return (1);
	else
		return (0);
}

int	countwords(char *str, char *charset)
{
	int	i;
	int	words;
	int	t;

	i = 0;
	words = 0;
	if (charset == 0)
		return (1);
	while (str[i])
	{
		while (checkcharset(str[i], charset) == 1 && str[i])
			i++;
		if (checkcharset(str[i], charset) == 0 && str[i] && t != 1)
		{
			words++;
			while (checkcharset(str[i], charset) == 0 && str[i])
				i++;
		}
		else if (str[i])
			i++;
		t = 0;
	}
	return (words);
}

int	construirpalavra(char *str, char *charset, int i, char **s)
{
	int		size;
	int		pos;

	size = 0;
	while (checkcharset(str[i], charset) == 0 && str[i])
	{
		size++;
		i++;
	}
	pos = i;
	*s = malloc((size + 1) * sizeof(char));
	if (*s == 0)
		return (0);
	(*s)[size] = '\0';
	while (size > 0)
	{
		(*s)[size - 1] = str[i - 1];
		size--;
		i--;
	}
	return (pos);
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	char	**s;
	int		i;
	int		a;

	if (str == 0)
		return (0);
	size = countwords(str, charset);
	s = malloc((size + 1) * sizeof(char *));
	if (s == 0)
		return (0);
	i = 0;
	a = 0;
	while (a < size && str[i])
	{
		while (checkcharset(str[i], charset) == 1 && str[i])
			i++;
		if (checkcharset(str[i], charset) == 0 && str[i])
			i = construirpalavra(str, charset, i, &s[a]);
		a++;
	}
	s[size] = NULL;
	return (s);
}
/*#include <stdio.h>
int	main (int ac, char **av)
{
	for (int i = 0; i < ac; i++)
	{
		char **arr = ft_split(av[i], " \t\n");
		for (int j = 0; arr[j]; j++)
		{
			printf("arr[%d][%d]: '%s'\n", i, j, arr[j]);
			if (!(arr[j+1]))
				printf("arr[%d][%d]: '%s'\n", i, j+1, arr[j+1]);
		}
	}
}*/