/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:26:38 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/16 19:56:36 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (dest[len])
	{
		len ++;
	}
	while (i < nb && src[i])
	{
		dest[len + i] = src[i];
		i ++;
	}
	dest[i + len] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char dest[20] = "debut";
	char src [] = "ahmongars";
	unsigned int len = 2;

	ft_strncat(dest, src, len);

	printf("%s", dest);
}*/
