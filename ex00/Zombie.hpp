/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:08:01 by yabad             #+#    #+#             */
/*   Updated: 2023/08/09 18:31:21 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
	private:
		std::string	name;
	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void	announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif