/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 07:49:50 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/16 19:54:53 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i ++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{  
	char str1[] = "abcd";
	char str2[] = "abCd";
	char str3[] = "abcd";
	int result;

	result = ft_strcmp(str1, str2);
	printf("strcmp(str1, str2) = %d\n", result);
	
	result = ft_strcmp(str1, str3);
	printf("strcmp(str1, str3) = %d\n", result);
}*/
