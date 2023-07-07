/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:23:42 by yabad             #+#    #+#             */
/*   Updated: 2023/07/07 11:27:41 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie*	ptr = newZombie("yabad");
	randomChump("zmoumen");
	ptr->announce();
	delete ptr;
	return (0);
}
