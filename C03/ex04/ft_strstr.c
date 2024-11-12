/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:24:11 by jowagner          #+#    #+#             */
/*   Updated: 2024/09/25 17:54:25 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] && to_find[j] == str[i + j])
		{
			j++;
			if (!to_find[j])
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	char	*str = "Bonjour je suis une bouboulete";
	char	*to_find = "une";

	printf("Str : %s\nto_find : %s", str, to_find);
	printf("\nFounded : %s", ft_strstr(str, to_find));
} */
