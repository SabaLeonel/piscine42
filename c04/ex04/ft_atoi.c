/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:47:18 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/23 19:47:21 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	res;

	res = 0;
	signe = 1;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i ++;
	while (str[i] == '+' || str[i] == '-')
	{
		signe *= -1;
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res += str[i] - 48;
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			res *= 10;
		else
			break ;
		i ++;
	}
	return (res * signe);
}
/*
int	main()
{
	char *c = " ---+-e-+1234ab567";

	printf("%d",ft_atoi(c));
}*/
