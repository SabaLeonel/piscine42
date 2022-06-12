/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <lsaba-qu@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 16:47:43 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/12 17:03:19 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int *ptrdiv;
	int *ptrmod;
	int x;
	int y;

	x = 47;
	y = 5;
	ptrdiv = &x;
	ptrmod = &y;

	ft_ultimate_div_mod(ptrdiv, ptrmod);
	printf("%d",x);
	printf("%d",y);
}
*/
