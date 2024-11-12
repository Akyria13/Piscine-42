/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:09:31 by jowagner          #+#    #+#             */
/*   Updated: 2024/10/02 17:03:01 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
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
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
}

/* #include <stdio.h>

int	main(void)
{
	int	nb = 4;
	int power = 3;

	printf(" 4 puissance de 3 = %d", ft_recursive_power(nb, power)); 
} */
