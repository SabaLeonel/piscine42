/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:16:30 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/21 16:24:03 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
		return (nb * (ft_recursive_power(nb, power - 1)));
	return (0);
}
/*
int main(void)
{
	printf("[%d] a la puissance [%d] est : %d\n",0 , 0, ft_recursive_power(0, 0));
	printf("[%d] a la puissance [%d] est : %d \n",1 , 0, ft_recursive_power(1, -8));
	printf("[%d] a la puissance [%d] est : %d \n",1 , 1, ft_recursive_power(1, 1));
	printf("[%d] a la puissance [%d] est : %d \n",2 , 2, ft_recursive_power(2, 2));
	printf("[%d] a la puissance [%d] est : %d \n",4 , 3, ft_recursive_power(4, 3));
	printf("[%d] a la puissance [%d] est : %d \n",5 , 3, ft_recursive_power(5, 3));
}
*/
