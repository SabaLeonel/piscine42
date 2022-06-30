/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:06:44 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/30 11:43:42 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i ++;
	}
	return (1);
}
/*
int main()
{
	int i;
	i = 2100054151;
	printf("Resultat du nombre premier de %d est : %d\n", i, ft_is_prime(i));
	i = 13;
	printf("Resultat du nombre premier de %d est : %d\n", i, ft_is_prime(i));
	i = 11;
	printf("Resultat du nombre premier de %d est : %d\n", i, ft_is_prime(i));
	i = 6;
	printf("Resultat du nombre premier de %d est : %d\n", i, ft_is_prime(i));
	i = 5;
	printf("Resultat du nombre premier de %d est : %d\n", i, ft_is_prime(i));
	i = 3;
	printf("Resultat du nombre premier de %d est : %d\n", i, ft_is_prime(i));
	i = 2;
	printf("Resultat du nombre premier de %d est : %d\n", i, ft_is_prime(i));
	i = 1;
	printf("Resultat du nombre premier de %d est : %d\n", i, ft_is_prime(i));
}
*/
