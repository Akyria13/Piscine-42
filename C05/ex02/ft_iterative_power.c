/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:45:11 by jowagner          #+#    #+#             */
/*   Updated: 2024/10/02 17:02:45 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		nb = nb * result;
		i++;
	}
	return (nb);
}

/* #include <stdio.h>

int	main(void)
{
	int	nb = 4;
	int power = 3;

	printf(" 4 puissance de 3 = %d", ft_iterative_power(nb, power)); 
} */
