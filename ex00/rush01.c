/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wouter <wouter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:37:49 by wouter            #+#    #+#             */
/*   Updated: 2024/09/01 13:57:14 by wouter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define TOP_LEFT "/"
#define TOP_MID "*"
#define TOP_RIGHT "\\"
#define MID_LEFT "*"
#define MID_MID " "
#define MID_RIGHT "*"
#define BOTTOM_LEFT "\\"
#define BOTTOM_MID "*"
#define BOTTOM_RIGHT "/"

void	ft_putchar(char c);

void	print_line(int x, char l, char m, char r)
{
	int	i;

	ft_putchar(l);
	i = 1;
	while (i++ < x - 1)
		ft_putchar(m);
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
		print_line(x, TOP_LEFT[0], TOP_MID[0], TOP_RIGHT[0]);
		i = 1;
		while (i++ < y - 1)
			print_line(x, MID_LEFT[0], MID_MID[0], MID_RIGHT[0]);
		if (i > 1)
			print_line(x, BOTTOM_LEFT[0], BOTTOM_MID[0], BOTTOM_RIGHT[0]);
	}
}
