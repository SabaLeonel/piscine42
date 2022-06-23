/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:54:15 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/23 15:49:14 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i ++;
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	return (dest);
}
/*
int main()
{
	char *a;
	char src [] = "sadsa";

	a = ft_strdup(src);

	int i = 0;
	while (a[i])
	{	write(1, &a[i], 1);
		i ++;
	}
	free (a);
	return (0);
}
*/
