/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <lsaba-qu@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:32:38 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/13 09:29:00 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main()
{
	int a;
	int b;

	a = 1;
	b = 3;

	ft_swap(&a, &b);

	printf("%d", b);

	return (0);
}
*/
