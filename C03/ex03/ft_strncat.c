/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:29:59 by jowagner          #+#    #+#             */
/*   Updated: 2024/09/25 17:50:44 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	i = 0;
	while (src[i] != '\0' && nb)
	{
		dest[j + i] = src[i];
		i++;
		nb--;
	}
	dest[i + j] = '\0';
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char src[9] = "je suis.";
	char dest[9] = "Un dodo,";
	
	ft_strncat(dest, src, 2);
	printf("%s", dest);
} */
