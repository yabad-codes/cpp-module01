/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:43:22 by yabad             #+#    #+#             */
/*   Updated: 2023/07/07 12:54:53 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string		str = "HI THIS IS BRAIN";
	std::string*	ptr = &str;
	std::string&	ref = str;

	std::cout << &str << std::endl;
	std::cout << &ptr << std::endl;
	std::cout << &ref << std::endl;

	std::cout << str << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	return (0);	
}
