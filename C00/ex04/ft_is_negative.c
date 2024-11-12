/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:49:57 by jowagner          #+#    #+#             */
/*   Updated: 2024/09/15 18:18:55 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_is_negative(int n)

{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else if (n >= 0)
	{
		ft_putchar('P');
	}
}

/*
24 - Si n est < que 0, affiche N, sinon si n est > ou = à n, alors affiche P. 
*/

/*
int	main(void)

{
	int	c;

	c = -1;
	ft_is_negative(c);
	return (0);
}
*/
