/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:09:25 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/28 18:26:14 by lsaba-qu         ###   ########.fr       */
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
		if (nb % i > 0)
		{
			return (1);
		}
		i ++;
	}

	return (0);
}


int ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb < 2)
		return (0);
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb) != 1)
	{
		nb ++;
	}
	return (nb);
}

int main()
{
	int i;
	i = 2100054151;
	printf("Resultat du nombre premier de %d est : %d\n", i, ft_find_next_prime(i));
	i = 21;
	printf("Resultat du nombre premier de %d est : %d\n", i, ft_find_next_prime(i));
	i = 32132151;
	printf("Resultat du nombre premier de %d est : %d\n", i, ft_find_next_prime(i));
	i = 21432151;
	printf("Resultat du nombre premier de %d est : %d\n", i, ft_find_next_prime(i));
	i = 2151;
	printf("Resultat du nombre premier de %d est : %d\n", i, ft_find_next_prime(i));
	i = 10;
	printf("Resultat du nombre premier de %d est : %d\n", i, ft_find_next_prime(i));
	i = 2;
	printf("Resultat du nombre premier de %d est : %d\n", i, ft_find_next_prime(i));
	i = 15;
	printf("Resultat du nombre premier de %d est : %d\n", i, ft_find_next_prime(i));
}
