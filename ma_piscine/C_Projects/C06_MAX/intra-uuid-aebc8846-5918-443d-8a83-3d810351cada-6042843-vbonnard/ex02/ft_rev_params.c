/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:58:12 by vbonnard          #+#    #+#             */
/*   Updated: 2024/09/09 10:05:57 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = argc - 1;
	if (argc > 1)
	{
		j = 0;
		while (i >= 1)
		{
			while (argv[i][j])
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			i--;
			j = 0;
			ft_putchar('\n');
		}
	}
	return (0);
}