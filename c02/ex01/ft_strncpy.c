/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <lsaba-qu@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:05:15 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/16 19:06:06 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int unsigned	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i ++;
	}	
	return (dest);
}

/*
int	main(void)
{
	char s[] = "Hello World";
	char d[40] = "bonjour";
	unsigned int i  = 5;

	ft_strncpy(d, s, i);
	printf("%s\n", d);

	
	strncpy(d, s, i);
	printf("%s", d);
}
*/
