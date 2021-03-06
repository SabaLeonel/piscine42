/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:50:15 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/23 11:31:45 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_str(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		write (1, &c[i], 1);
		i ++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_str(argv[i]);
		i ++;
	}
	return (0);
}
