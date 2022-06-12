/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apittet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:45:51 by apittet           #+#    #+#             */
/*   Updated: 2022/06/12 15:12:34 by apittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	draw_cell_first_row(int max_column, int current_row);
void	draw_cell_last_row(int max_column, int current_row);
void	draw_cell_middle_row(int max_column, int current_row);

void	rush(int max_column, int max_row)
{
	int	current_row;
	int	current_column;

	if (max_column <= 0 || max_row <= 0)
		return ;
	current_column = 1;
	while (current_column <= max_row)
	{
		current_row = 1;
		while (current_row <= max_column)
		{
			if (current_column == 1)
				draw_cell_first_row(max_column, current_row);
			else if (current_column == max_row)
				draw_cell_last_row(max_column, current_row);
			else
				draw_cell_middle_row(max_column, current_row);
			current_row++;
		}
		current_column++;
		ft_putchar('\n');
	}
}

void	draw_cell_first_row(int max_column, int current_row)
{
	if (current_row == 1 || current_row == max_column)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	draw_cell_last_row(int max_column, int current_row)
{
	if (current_row == 1 || current_row == max_column)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	draw_cell_middle_row(int max_column, int current_row)
{
	if (current_row == 1 || current_row == max_column)
		ft_putchar('B');
	else
		ft_putchar(' ');
}
