/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <lsaba-qu@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:41:39 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/08 21:20:36 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}