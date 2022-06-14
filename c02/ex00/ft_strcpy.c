/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <lsaba-qu@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:27:04 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/14 19:03:05 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h> */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}		
	dest[i] = 0;
	return (dest);
}
/*
int	main(void)
{
	char a[] = "test";
	char b[] = "";
	
	ft_strcpy(b, a);

	printf("%s", b);

}
*/
