/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:33:25 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/12 12:40:41 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.h"

#include <iostream>
#include <list>

void func()
{
	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << "top " << list.back() << std::endl;
	list.pop_back();
	std::cout << "size " << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737); //[...] list.push_back(0);
	std::list<int>::iterator it = list.begin();
	std::list<int>::iterator ite = list.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int> l(list);
}

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737); //[...] mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "LIST:" << std::endl;
	func();
	return 0;
}