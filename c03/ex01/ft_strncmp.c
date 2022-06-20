/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 08:44:18 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/19 15:54:22 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i ++;
	}
	return (0);
}
/*
int	main(void)
{
	char str1[42] = "abc";
   	char str2[42] = "abcDDD";
	int n = 133;
	int result;

  // comparing strings str1 and str2
  result = ft_strncmp(str1, str2, n);
  printf("ft_trcmp(str1, str2) = %d\n", result);

  // comparing strings str1 and str3
  result = strncmp(str1, str2, n);
  printf("strcmp(str1, str2) = %d\n", result);
}
*/
