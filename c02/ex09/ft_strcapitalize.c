/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 10:13:19 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/25 15:30:47 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;

	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i] -= 32 ;
		}
		else 
			str[i] += 32;
	}
	return (str);
}


int main ()
{
	char c;

	c = *ft_strcapitalize("hello");

	printf("%c\n", c);
	return (0);
}
