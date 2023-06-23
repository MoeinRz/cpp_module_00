/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   megaphone.cpp                                                            */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2023/06/22 19:49:38 by moeinrz                                  */
/*   Updated: 2023/12/22 20:02:09 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

int main(void)
{
	std::string	input;

	std::cout << "Enter your selection:\nADD, SEARCH, EXIT" << std::endl;
    std::cin >> input;
	if (input.compare("ADD") == 0)
		std::cout << "Your selection is ADD" << std::endl;
	else if (input.compare("EXIT") == 0)
		std::cout << "Your selection is EXIT" << std::endl;
	else if (input.compare("SEARCH") == 0)
		std::cout << "Your selection is SEARCH" << std::endl;
	else
		std::cout << "Your selection is wrong" << std::endl;
	return (0);
}
