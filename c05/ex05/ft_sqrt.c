/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 08:51:52 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/21 18:07:21 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 1)
		return (1);
	if (nb <= 0 || nb > 2147395600)
		return (0);
	while (i * i < nb)
	{
		i ++;
	}
	if (nb == i * i)
		return (i);
	return (0);
}
/*
int main (void)
{
	printf("racine carre de : %d = %d\n", 1, ft_sqrt(1));
	printf("racine carre de : %d = %d\n", 2, ft_sqrt(2));
	printf("racine carre de : %d = %d\n", 1640045925, ft_sqrt(1640045925));
	printf("racine carre de : %d = %d\n", 2147395600, ft_sqrt(2147395600));
	printf("racine carre de : %d = %d\n", 617472801, ft_sqrt(617472801));
	printf("racine carre de : %d = %d\n", 1313755880, ft_sqrt(1313755880));
	printf("racine carre de : %d = %d\n", 1124797444, ft_sqrt(1124797444));
	printf("racine carre de : %d = %d\n", 807547596, ft_sqrt(807547596));
	printf("racine carre de : %d = %d\n", 1586349241, ft_sqrt(1586349241));
	printf("racine carre de : %d = %d\n", 1869372316, ft_sqrt(1869372316));
	printf("racine carre de : %d = %d\n", 1176078436, ft_sqrt(1176078436));
	printf("racine carre de : %d = %d\n", 1062663638, ft_sqrt(1062663638));
	printf("racine carre de : %d = %d\n", 346921, ft_sqrt(346921));
	printf("racine carre de : %d = %d\n", 354969689,ft_sqrt(354969689));
}
*/
