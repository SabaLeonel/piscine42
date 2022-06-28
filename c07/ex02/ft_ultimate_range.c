/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:38:47 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/28 11:39:07 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

int	ft_ultimate_range(int **range, int min, int max)
{
	if (max <= min)
		return (0);
	*range = ft_range(min, max);
	if (range == NULL)
		return (-1);
	return (max - min);
}
/*
int	main()
{
	int **tab;
	int t = 0;
	
	tab = malloc(sizeof(*tab) * 1);
	t = ft_ultimate_range(tab, 1, 10);

	printf("%d ", t); 
}
*/
