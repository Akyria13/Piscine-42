/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:55:30 by jowagner          #+#    #+#             */
/*   Updated: 2024/09/18 20:05:23 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)

{
	int	array;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		array = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = array;
		i++;
	}
}

/* int	main(void)

{
	int	tab[] = {10, 9, 8, 7, 6};
	int	size = 5;
	int	i;

	i = 0;
	printf("Entrée : ");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	i = 0;
	ft_rev_int_tab(tab, size);
	printf("\nSortie : ");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
} */
