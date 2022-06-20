/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:02:50 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/20 19:12:38 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	res = 1;
	i = 1;
	if (nb <  0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1)
	while (nb >= i)
	{
		res *= i;
		i ++;
	}
	return (res);
}
/*
int main(void)
{
	printf("%d", ft_iterative_factorial(2));
}
*/
