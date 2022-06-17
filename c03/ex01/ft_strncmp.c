/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 08:44:18 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/16 19:56:04 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n -1 && s1[i] == s2[i])
	{
		i ++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char str1[] = "abc";
   	char str2[] = "abce";
	int n = 4;
	int result;

  // comparing strings str1 and str2
  result = ft_strncmp(str1, str2, n);
  printf("ft_trcmp(str1, str2) = %d\n", result);

  // comparing strings str1 and str3
  result = strncmp(str1, str2, n);
  printf("strcmp(str1, str3) = %d\n", result);
}
*/
