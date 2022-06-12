/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaba-qu <lsaba-qu@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 16:22:05 by lsaba-qu          #+#    #+#             */
/*   Updated: 2022/06/12 16:47:13 by lsaba-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int *ptrdiv;
	int *ptrmod;
	int x;
	int y;
	
	ptrdiv = &x;
	ptrmod = &y;

	ft_div_mod(47, 5, ptrdiv, ptrmod);
	printf("%d", x);
	printf("%d", y);
}
*/
