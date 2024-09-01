/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wouter <wouter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:37:49 by wouter            #+#    #+#             */
/*   Updated: 2024/09/01 14:03:49 by wouter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x, char l, char m, char r)
{
	int	i;

	ft_putchar(l);
	i = 1;
	while (i++ < x - 1)
	{
		ft_putchar(m);
		i++;
	}
	if (x > 1)
		ft_putchar(r);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
		write(1, "Error\n", 6);
	else
	{
		print_line(x, 'A', 'B', 'A');
		i = 1;
		while (i < y - 1)
		{
			print_line(x, 'B', ' ', 'B');
			i++;
		}
		if (i > 1)
			print_line(x, 'C', 'B', 'C');
	}
}
