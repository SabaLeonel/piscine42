/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 10:44:46 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/21 15:46:54 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	res = 1;
	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i <= power)
	{
		res *= nb;
		i ++;
	}
	return (res);
}
/*
int main (void)
{
	printf("[%d] a la puissance [%d] est : %d\n",0 , 0, ft_iterative_power(0, 0));
	printf("[%d] a la puissance [%d] est : %d \n",1 , 0, ft_iterative_power(1, 0));
	printf("[%d] a la puissance [%d] est : %d \n",1 , 1, ft_iterative_power(1, 1));
	printf("[%d] a la puissance [%d] est : %d \n",2 , 2, ft_iterative_power(2, 2));
	printf("[%d] a la puissance [%d] est : %d \n",4 , 3, ft_iterative_power(4, 3));
	printf("[%d] a la puissance [%d] est : %d \n",5 , 3, ft_iterative_power(5, 3));
}
*/
