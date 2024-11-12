/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:48:44 by jowagner          #+#    #+#             */
/*   Updated: 2024/09/25 17:55:42 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/* #include <stdio.h>

int	main(void)
{
	char s1[] = "ab";
	char s2[] = "cbq";
	
	ft_strcmp(s1, s2);
	printf("%d", s1[i] - s2[i]);
} */