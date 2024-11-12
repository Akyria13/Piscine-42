/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:23:08 by jowagner          #+#    #+#             */
/*   Updated: 2024/09/21 21:11:04 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (!(str[i - 1] >= '0' && str[i - 1] <= '9') && \
				!(str[i - 1] >= 'a' && str[i - 1] <= 'z') && \
				!(str[i - 1] >= 'A' && str[i - 1] <= 'Z') && \
				(str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/* #include <stdio.h>
 
int	main(void)
   {
   char str[] = "salo q()m(Ment tu vas ? 4x; cinquante+et+un";
   printf("%s\n", ft_strcapitalize(str));
   } */
