/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caisik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 18:11:03 by caisik            #+#    #+#             */
/*   Updated: 2026/06/28 18:11:05 by caisik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_liner(int row, char *letters)
{
	int	current_row;

	current_row = 1;
	while (current_row <= row)
	{
		if (current_row == 1)
		{
			ft_putchar(letters[0]);
		}
		else if (current_row == row)
		{
			ft_putchar(letters[2]);
		}
		else
		{
			ft_putchar(letters[1]);
		}
		current_row++;
	}
}

void	rush(int row, int column)
{
	int	current_column;

	current_column = 1;
	if (row >= 1 && column >= 1)
	{
		while (current_column <= column)
		{
			if (current_column == 1)
			{
				ft_liner(row, "/*\\");
			}
			else if (current_column == column)
			{
				ft_liner(row, "\\*/");
			}
			else
			{
				ft_liner(row, "| |");
			}
			ft_putchar('\n');
			current_column++;
		}
	}
}
