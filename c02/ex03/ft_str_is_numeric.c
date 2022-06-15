/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <lsaba-qu@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:19:36 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/15 20:00:23 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h> */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i ++;
	}
	return (1);
}
/*
int	main(void)
{
	char num[] = "0asda1234546";
	char pas[] = "asdsadasd";
	
	printf("%d\n", ft_str_is_numeric(num));
	printf("%d\n", ft_str_is_numeric(pas));
}
*/
