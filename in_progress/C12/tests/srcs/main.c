/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:26:46 by mehdi             #+#    #+#             */
/*   Updated: 2024/09/10 22:51:11 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	test_push_front(void);
void	test_create_elem(void);
void	test_push_back(void);
void	test_list_size(void);
void	test_list_last(void);

int	main(void)
{
	test_create_elem();
	test_push_front();
	test_list_size();
	test_list_last();
	test_push_back();
	return (0);
}
