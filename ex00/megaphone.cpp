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

#include <iostream>

int main(int argc, char **argv)
{
	if (argc <= 1)
		std::cout << "No argument provided." << std::endl;
	else
	{
		std::cout << "You entered: " << argv[1] << std::endl;
	}
	return (0);
}






























// #include <iostream>
// #include <cctype>
// #include <string>

// int	main(int argc, char **argv) {


// 	if (argc == 1)
// 	{
// 		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
// 		return 0;
// 	}

// 	std::string	arg;
// 	std::string::const_iterator it;
	
// 	int	i = 1;
// 	while (argv[i] != NULL)
// 	{
// 		arg = argv[i];
// 		for (it = arg.begin() ; it != arg.end() ; ++it) {
// 			std::cout << (char) std::toupper((int) *it);
// 		}
// 		i++;
// 	}
// 	std::cout << std::endl;

// 	return 0;
// }