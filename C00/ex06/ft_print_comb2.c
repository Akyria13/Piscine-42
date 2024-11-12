/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:11:47 by jowagner          #+#    #+#             */
/*   Updated: 2024/09/15 14:05:49 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_putint(int i, int j)

{
	if (i <= 98)
	{
		ft_putchar(i / 10 + 48);
		ft_putchar(i % 10 + 48);
		ft_putchar(' ');
		ft_putchar(j / 10 + 48);
		ft_putchar(j % 10 + 48);
		if (!(i == 98 && j == 99))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

/*
 * 24 - J'écris mes caractères un par un en divisant mes indexs.
 * Puis j'ajoute 48 de la table ASCII pour les écrire.
 */

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putint(i, j);
			j++;
		}
		i++;
	}
}

/*
 * 50 - Boucle jusqu'à que mon index i atteigne 98.
 * Puis initialise à j la valeur de i + 1.
 */

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
