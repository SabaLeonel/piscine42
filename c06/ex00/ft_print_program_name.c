/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:36:55 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/22 19:58:13 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_str(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i ++;
	write(1, c, i);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	(void) argc;
	ft_str(argv[0]);
	return (0);
}
