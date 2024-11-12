/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:03:33 by jowagner          #+#    #+#             */
/*   Updated: 2024/10/02 17:03:21 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i != nb && i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/* #include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("Square root of %d is %d.", atoi(av[1]), ft_sqrt(atoi(av[1])));
} */
