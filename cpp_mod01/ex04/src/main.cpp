/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:40:32 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/17 14:40:32 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int argc, const char *argv[])
{
	if (argc == 4)
	{
		std::ifstream infile(argv[1]);

		if (infile.is_open())
		{
			std::string out;
			out.append(argv[1]);
			out.append(".replace");
			std::ofstream outfile(out);

			std::string line;
			std::string res;
			while (!infile.eof())
			{
				std::string word;
				bool is_first_word = true;

				getline(infile, line);
				std::istringstream words(line);

				if (!res.empty())
					res.append("\n");
				while (words >> word)
				{
					if (is_first_word)
						is_first_word = false;
					else
						res.append(" ");
					if (!word.compare(argv[2]))
						res.append(argv[3]);
					else
						res.append(word);
				}
			}
			outfile << res;
		}
		else
			std::cout << "File [" << argv[1] << "] not found.\n";
	}
	else
		std::cout << "Invalid number of arguments.\nExample: ./sed <filename> <word to replace> <replacement word>\n";

	// system("leaks sed");
	return (0);
}
