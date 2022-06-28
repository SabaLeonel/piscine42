/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 09:37:26 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/28 10:02:03 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	tab = 0;
	if (min >= max)
	{
		return (0);
	}
	tab = malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		min ++;
		i ++;
	}
	return (tab);
}
/*
void print_tab(int *tab,int taille)
{
	int i = 0;

	for (i = 0; i < taille; i++)
		printf("%d, ", tab[i]);
	printf("\n");

}

int main (void)
{
	print_tab(ft_range(3110, -2204), -5314);
	print_tab(ft_range(1641, 1641), 0);
	print_tab(ft_range(2147483647, 1670), -2147481977);
	print_tab(ft_range(0, 0), 0);
	print_tab(ft_range(0, 1), 1);
	print_tab(ft_range(0, 15), 15);
	print_tab(ft_range(14, 15), 1);
	print_tab(ft_range(1, 0), -1);
	print_tab(ft_range(2, 2), 0);
	print_tab(ft_range(3, 5), 2);
	print_tab(ft_range(6, 9), 3);
	print_tab(ft_range(7, 10), 3);
	print_tab(ft_range(-7, 13), 20);
	print_tab(ft_range(-6, 17), 23);
	print_tab(ft_range(-3, 18), 21);
}
*/
