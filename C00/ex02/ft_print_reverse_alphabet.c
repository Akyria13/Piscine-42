/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:48:45 by jowagner          #+#    #+#             */
/*   Updated: 2024/09/14 17:56:11 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)

{
	char	i;

	i = 122;
	while (i >= 97)
	{
		ft_putchar(i);
		i--;
	}
}

/*
 26 - i (index) commence à la lettre "Z" dans la table ASCII.
 27 - i se décrémente jusqu'à la lettre "A" dans la table ASCII.
*/

/*
int	main(void)

{
	ft_print_reverse_alphabet();
}
*/
