/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:46:17 by jowagner          #+#    #+#             */
/*   Updated: 2024/09/14 17:59:00 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
void	ft_putchar(char c)

{
	write(1, &c, 1);
}
*/

void	ft_testchar(char a, char b, char c)

{
	if (a == '7')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
	else if (!(a == b))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, &", ", 2);
	}
}

/*
26 - Ecrit 789 sans la ", " en fin de boucle quand la condition est rencontrée.
32 - Sinon écrit les nombres jusqu´a remplir la condition if.
*/

void	ft_print_comb(void)

{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_testchar(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*
54 - Boucle jusqu'à que ma variable a = 7.
Puis initialise b à 0 pour relancer ma seconde boucle.
57 - Boucle jusqu'à que ma variable b = 8.
Puis initialise c à 0 pour relancer ma troisième boucle.
60 - Boucle jusqu'à que ma variable c = 9.
Et tant que c != 9, passe ma fonction d'écriture ft_testchar.
J'incrémente jusqu'a que abc = 789.
*/

/*
int	main(void)

{
	ft_print_comb();
	return (0);
}
*/
