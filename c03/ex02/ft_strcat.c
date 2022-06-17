/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 09:53:18 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/16 10:26:24 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (dest[len])
	{
		len ++;
	}
	while (src[i])
	{
		if (src[i])
			dest[len + i] = src[i];
		i ++;
	}
	dest[i + len] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char a[] = "debut";
	char b[40] = "fin";
	
	ft_strcat(b,a);
	printf("%s", b);
}*/
