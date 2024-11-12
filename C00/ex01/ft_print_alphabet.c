/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:30:38 by jowagner          #+#    #+#             */
/*   Updated: 2024/09/15 16:22:01 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)

{
	char	i;

	i = 97;
	while (i <= 122)
	{
		ft_putchar(i);
		i++;
	}
}

/*
26 - i (index) commence à la lettre "a" dans la table ASCII.
 27 -  i s'incrémente jusqu'à la lettre "z" dans la table ASCII.
 */

/*
int	main(void)
{
	ft_print_alphabet();
}
*/
