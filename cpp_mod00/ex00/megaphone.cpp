/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 23:30:30 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/26 23:30:30 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

static int	toUpper(int c) {
	if (c >= 'a' && c <= 'z')
		c = 'A' + c - 'a';
	return (c);
}

int	main(int argc, char const *argv[])
{
	int	i = 1;
	for (; argv[i]; i++) {
		for (; *argv[i]; argv[i]++)
			cout << (char) toUpper(*argv[i]);
		if (!(*(argv[i] + 1)))	
			cout << " ";
	}
	cout << endl;
	return 0;
}
