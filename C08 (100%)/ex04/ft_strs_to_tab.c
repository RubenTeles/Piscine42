#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != 0)
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dst;
	int		src_len;
	int		pos;

	src_len = ft_strlen(src);
	dst = malloc(sizeof(*dst) * (src_len + 1));
	if (dst == 0)
		return (0);
	pos = 0;
	while (src[pos] != 0)
	{
		dst[pos] = src[pos];
		pos++;
	}
	dst[pos] = 0;
	return (dst);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*res;
	int			pos;

	pos = 0;
	res = malloc(sizeof(*res) * (ac + 1));
	if (res == 0)
		return (0);
	while (pos < ac)
	{
		res[pos].size = ft_strlen(av[pos]);
		res[pos].str = av[pos];
		res[pos].copy = ft_strdup(res[pos].str);
		pos++;
	}
	res[pos].str = 0;
	return (res);
}
