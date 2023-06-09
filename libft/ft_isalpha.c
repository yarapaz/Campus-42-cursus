/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapaz-go <yapaz-go@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:02:46 by yapaz-go          #+#    #+#             */
/*   Updated: 2023/03/17 16:34:31 by yapaz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int n)
{
	return ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'));
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("custom: %d\n", ft_isalpha(97));
	printf("original: %d\n", isalpha(97));
}*/
