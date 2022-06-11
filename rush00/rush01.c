#include <unistd.h>

void ft_putchar(char c);

void first_row(int x, int i_x)
{
	if (i_x == 1)
		ft_putchar('/');
	else if (i_x == x)
		ft_putchar('\\');
	else
		ft_putchar('*');
}

void last_row(int x, int i_x)
{
	if (i_x == 1)
		ft_putchar('\\');
	else if (i_x == x)
		ft_putchar('/');
	else
		ft_putchar('*');
}

void middle_row(int x, int i_x)
{
	if (i_x == 1 || i_x == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void rush01(int x, int y)
{
	int i_x;
	int i_y;

	if (x<=0 || y <= 0)
	{
		write(1, "Input a positive number into rush01(int x, int y) function", 58);  
		return;
	}

	i_y = 1;
	while (i_y <= y)
	{
		i_x = 1;
		while (i_x <= x)
		{
			if (i_y == 1)
				first_row(x, i_x);
			else if (i_y == y)
				last_row(x, i_x);
			else
				middle_row(x, i_x);
			i_x++;
		}
		i_y++;
		ft_putchar('\n');
	}
}
