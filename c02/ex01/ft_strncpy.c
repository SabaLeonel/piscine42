/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <lsaba-qu@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:05:15 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/15 19:59:37 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int unsigned	i;

	i = 0;
	while (i < n)
	{
		if (src[1])
		{
			dest[i] = src[i];
		}
		else
			dest[i] = '\0';
		i ++;
	}		
	return (dest);
}

/*
int	main(void)
{
	char s[] = "getrekt";
	char d[] = "";
	unsigned int i  = 3;

	ft_strncpy(d, s, i);

	printf("%s", d);
}
*/
