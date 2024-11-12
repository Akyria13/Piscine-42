/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:04:26 by jowagner          #+#    #+#             */
/*   Updated: 2024/09/18 12:21:24 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)

{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/* int	main(void)

{
	int	a = 20;
	int	b = 10;

	ft_swap(&a, &b);
	printf("Pointeur a (à la base = 20), maintenant = %d.\n\
Pointeur b (à la base 10), maintenant = %d.\n", a, b);
} */
