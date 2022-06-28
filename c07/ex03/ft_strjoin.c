/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 11:27:26 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/28 11:38:37 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_biglen(char **str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			j ++;
			k ++;
		}
		i ++;
	}
	return (k);
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (0);
}

void	ft_sep(char *sep, char *dest, int *k)
{
	int	i;
	int	comptemongars;

	comptemongars = *k;
	i = 0;
	while (sep[i])
	{
		dest[comptemongars] = sep[i];
		comptemongars ++;
		i ++;
	}	
	*k = comptemongars;
}

char	*ft_catv2(int size, char **strs, char *sep, char *dest)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			dest[k] = strs[i][j];
			k ++;
			j ++;
		}
		if (i < size - 1)
			ft_sep(sep, dest, &k);
		i ++;
	}
	dest[k] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		lentotal;
	char	*dest;
	int		lensep;

	lentotal = ft_biglen(strs);
	lensep = ft_len(sep);
	if (size == 0)
	{
		dest = malloc(sizeof(*dest) * 1);
		dest [0] = '\0';
		return (dest);
	}
	dest = malloc(sizeof(*dest) * (lentotal + 1 + ((lensep * (size - 1)))));
	dest = ft_catv2(size, strs, sep, dest);
	return (dest);
}
/*
int main(void)
{
	char **strs = malloc(sizeof(char)*128);
	
	char *str1 ="Salut";
	char *str2 = "comment";
	char *str3 = "ca";
	char *str4 = "va";
	char *str5 = " 42 1!1!";
	char *dst;
	char *sep = ", ";
	

	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	strs[4] = str5;

	dst = ft_strjoin(0, strs, sep);
	printf("%c\n", dst[0]);
	//write(1, dst, 1);
	
	free(dst);
	//printf("%p", dst);

	return (0);
}
*/
