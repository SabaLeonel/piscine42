/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:24:46 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/29 17:04:32 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int swap;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{	
			if (tab[j] - tab[j + 1] > 0)
			{	
				swap = tab[j];
				tab[j] = tab[size - 1 - j];
				tab[size - 1 - j] = swap;
			}
			j ++;
		}
		i ++;
	}
}


int main()
{
	int i = 0;
	int tab[5];
	
	tab[0] = 42;
	tab[1] = 2;
	tab[2] = 1;
	tab[3] = -1;
	tab[4] = 0;
	ft_sort_int_tab(tab, 5);
	for (i = 0; i < 5; i ++)
		printf("%d\n",tab[i] );
}
