/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:33:52 by jowagner          #+#    #+#             */
/*   Updated: 2024/09/21 21:12:28 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	j = i;
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char src[18] = "Je suis un dodo.";
	char dest[18] = "Bonjour le ploup.";
	unsigned int	n;

	n = 10;
	ft_strncpy(dest, src, n);
	printf("%s", dest);
} */
