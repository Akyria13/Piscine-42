/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:46:45 by jowagner          #+#    #+#             */
/*   Updated: 2024/09/21 21:10:48 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	size_src;
	unsigned int	i;

	i = 0;
	while ((i < size - 1) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	size_src = ft_strlen(src);
	dest[i] = '\0';
	return (size_src);
}

/* #include <stdio.h>

int	main(void)
{
	char src[18] = "Je suis un dodo.";
	char dest[18] = "Bonjour le zloup.";

	ft_strlcpy(dest, src, 18);
} */
