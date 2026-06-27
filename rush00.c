void	ft_putchar(char c);

void	ft_liner(int x, char *letters)
{
	int	cur_x;

	cur_x = 1;
	while (cur_x <= x)
	{
		if (cur_x == 1)
		{
			ft_putchar(letters[0]);
		}
		else if (cur_x == x)
		{
			ft_putchar(letters[2]);
		}
		else
		{
			ft_putchar(letters[1]);
		}
		cur_x++;
	}
}

void	rush(int x, int y)
{
	int	cur_y;

	cur_y = 1;
	if (x >= 1 && y >= 1)
	{
		while (cur_y <= y)
		{
			if (cur_y == 1)
			{
				ft_liner(x, "o-o");
			}
			else if (cur_y == y)
			{
				ft_liner(x, "o-o");
			}
			else
			{
				ft_liner(x, "| |");
			}
			ft_putchar('\n');
			cur_y++;
		}
	}
}
