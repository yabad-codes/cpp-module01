/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:13:21 by yabad             #+#    #+#             */
/*   Updated: 2023/07/07 12:38:54 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	int	N = 5;
	Zombie*	zombies = zombieHorde(N, "zmoumen");
	for (int i = 0; i < N; i++) {
		zombies[i].announce();
	}
	delete [] zombies;
	return (0);	
}
