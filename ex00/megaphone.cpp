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
	int			i = 1;
	int			j;
	std::string	str;

	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			str = argv[i];
			j = 0;
			while (j < str.length())
			{
        		str[j] = std::toupper(str[j]);
        		j++;
			}
			std::cout << str;
			std::cout << " ";
			i++;
    	}
		std::cout << std::endl;
	}
	return (0);
}
