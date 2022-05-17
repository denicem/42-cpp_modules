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
#include <string>

int main(int argc, const char *argv[])
{
	if (argc == 4)
	{
		// TODO: HERE input handling (parser/error management)
		std::string res;
		std::string in;
		std::ifstream infile(argv[1]);

		std::string out;
		out.append(argv[1]);
		out.append(".replace");
		std::ofstream outfile(out);

		if (infile.is_open())
		{
			while (!infile.eof())
			{
				infile >> in;
				if (!res.empty())
					res.append(" ");
				if (!in.compare(argv[2]))
					res.append(argv[3]);
				else
					res.append(in);
			}
			outfile << res;
		}
		else
			std::cout << "File not found.\n";
	}
	else
		std::cout << "Invalid number of arguments.\n";
	return (0);
}

// TODO: handle newlines
// TODO: handle empty line at the end of file
// TODO: structure, organize and clean code
