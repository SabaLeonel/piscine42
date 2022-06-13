/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <lsaba-qu@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 07:58:59 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/13 15:08:32 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i <= size / 2)
	{
		swap = tab [i];
		tab [i] = tab[size - i - 1];
		tab [size - i - 1] = swap;
		i ++;
	}
	tab [i + 1] = '\0';
}	

int	main(void)
{
	int tab [] = {1,2,3,4,5,6,7,8,9,10};
	int taille = 10;
	int i = 0;
	
	ft_rev_int_tab(tab, taille);
	while(i < taille)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}

