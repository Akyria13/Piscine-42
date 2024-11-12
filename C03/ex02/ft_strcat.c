/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:08:53 by jowagner          #+#    #+#             */
/*   Updated: 2024/09/25 17:55:09 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char src[9] = "je suis.";
	char dest[9] = "Un dodo,";
	
	ft_strcat(dest, src);
	printf("%s", dest);
} */
