/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:05:02 by jowagner          #+#    #+#             */
/*   Updated: 2024/09/18 13:46:18 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

/* int	main(void)

{
	int	a = 20;
	int	b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf("Le résultat de ma division (20/3) : %d.\n\
Le reste de ma division : %d.\n", a, b);
} */
