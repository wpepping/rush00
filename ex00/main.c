/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wouter <wouter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:48:41 by wouter            #+#    #+#             */
/*   Updated: 2024/09/01 13:50:59 by wouter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	main()
{
	rush(-1, 5);
	rush(5, -1);
	rush(0, 5);
	rush(5, 0);
	rush(5, 5);
	return (0);
}
