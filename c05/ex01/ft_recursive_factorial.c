/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 10:19:36 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/21 15:26:42 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	return (nb * (ft_recursive_factorial(nb - 1)));
}
/*
int main (void)
{
	printf("factoriel de :%d est : %d\n", 0, ft_recursive_factorial(0));
	printf("factoriel de :%d est : %d\n", 1, ft_recursive_factorial(1));
	printf("factoriel de :%d est : %d\n", 2, ft_recursive_factorial(2));
	printf("factoriel de :%d est : %d\n", 3, ft_recursive_factorial(3));
	printf("factoriel de :%d est : %d\n", 4, ft_recursive_factorial(4));
	printf("factoriel de :%d est : %d\n", 5, ft_recursive_factorial(5));
}
*/
