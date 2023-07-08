/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:00:26 by yabad             #+#    #+#             */
/*   Updated: 2023/07/08 23:14:11 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	find_and_replace(std::string filename, std::string s1, std::string s2) {
	//Open the input file
	std::ifstream inputFile(filename);
	if (!inputFile) {
		std::cerr << "Failed to open the file : " << filename << std::endl;
		return ;
	}
	//Create the output file
	std::ofstream outputFile(filename + ".replace");
	if (!outputFile) {
		std::cerr << "Failed to create the file : " << filename + ".replace" << std::endl;
		inputFile.close();
		return ;
	}
	//Read from the input file line by line and save it into a variable string
	std::string line;
	while (std::getline(inputFile, line)) {
		size_t	pos = line.find(s1);
		while (pos != std::string::npos) {
			line.insert(pos + s1.length(), s2);
			line.erase(pos, s1.length());
			pos = line.find(s1, pos + s2.length());
		}
		outputFile << line << std::endl;
	}
	//Close the file descriptors
	inputFile.close();
	outputFile.close();
}

int	main(void) {
	std::string	filename, s1, s2;

	std::cout << "Enter the filename : ";
	std::cin >> filename;
	std::cout << "Enter the 1st string : ";
	std::cin >> s1;
	std::cout << "Enter the 2nd string : ";
	std::cin >> s2;
	find_and_replace(filename, s1, s2);
	return (0);	
}
