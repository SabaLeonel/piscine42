/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:54:15 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/28 09:29:30 by lsaba-qu         ###   ########.fr       */
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
	dest = malloc(sizeof(*src) * (i + 1));
	if (!dest)
	{
		dest[0] = '\0';
		return (0);
	}
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main()
{
	char *str;

	str = ft_strdup("");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("hello 42");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("o2Unr46PCLs");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("Kz");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("2RPcu9qwdmANVJhTIT3ERQXGD5PbSx1T");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("VIij1BDgFgVy5XHBa3te2x6mE9sOQrNsg1B4G9Toifw5w");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("V9");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("hnAnDYZw2");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("GSnmvlEZQFQ0d748Cj6sy6Fgp6BSXMM7Z1");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("EGnPOkx5MBl0NrTppv8gaum");
	printf("%s\n", str);
	free(str);

	return (0);
}
*/
