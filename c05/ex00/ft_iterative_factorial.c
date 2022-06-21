/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:02:50 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/21 15:19:57 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	res = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (i <= nb)
	{
		res *= i;
		i ++;
	}
	return (res);
}
/*
int main(void)
{
	printf("factoriel de :%d est : %d\n", 0, ft_iterative_factorial(0));
	printf("factoriel de :%d est : %d\n", 1, ft_iterative_factorial(1));
	printf("factoriel de :%d est : %d\n", 2, ft_iterative_factorial(2));
	printf("factoriel de :%d est : %d\n", 3, ft_iterative_factorial(3));
	printf("factoriel de :%d est : %d\n", 4, ft_iterative_factorial(4));
	printf("factoriel de :%d est : %d\n", 5, ft_iterative_factorial(5));
}
*/
