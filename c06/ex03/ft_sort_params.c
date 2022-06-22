/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:39:21 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/22 20:00:10 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **bigtab, int i)
{
	char	*swap;

	swap = bigtab[i];
	bigtab[i] = bigtab[i + 1];
	bigtab[i + 1] = swap;
}

void	ft_str(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i ++;
	}
	write(1, c, i);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc -1)
		{
			if (ft_cmp(argv[j], argv[j + 1]) > 0)
				ft_swap(argv, j);
			j++;
		}
		i++;
	}	
	i = 1;
	while (i < argc)
	{
		ft_str(argv[i]);
		i++;
	}
	return (0);
}
