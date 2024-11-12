/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:01:09 by jowagner          #+#    #+#             */
/*   Updated: 2024/09/14 17:54:12 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

/*
int	main(int argc, char *argv[])

{
	char	c;

	(void)argc;
	c = argv[1][0];
	ft_putchar(c);
	return (0);
}
*/
